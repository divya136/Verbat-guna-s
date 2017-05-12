# Verbat-guna-s


How to use

files

ViewController.h/m: example view controller (not necessary)
DraggableViewBackground.h/m: UIView that holds the DraggableView. This can be put ontop of view controllers or you can set it as the main view of your view controller
DraggableView.h/m: UIView of the draggable cards
Setup as View Controller (see ViewController.m)

DraggableViewBackground *draggableBackground = [[DraggableViewBackground alloc]initWithFrame:self.view.frame];
[self.view addSubview:draggableBackground];
Setup as UIView ontop of View Controller

CGRect frame = self.view.frame;
frame.origin.y = -self.view.frame.size.height; //optional: if you want the view to drop down
DraggableViewBackground *draggableBackground = [[DraggableViewBackground alloc]initWithFrame:frame];
draggableBackground.alpha = 0; //optional: if you want the view to fade in
  
[self.view addSubview:draggableBackground];
  
  //optional: animate down and in
[UIView animateWithDuration:0.5 animations:^{
    draggableBackground.center = self.view.center;
    draggableBackground.alpha = 1;
}];
Presenting Your Data

Loading Data

edit -(void)loadCards in DraggableViewBackground.m to dictate what information is loaded and how

"allCards" holds all the cards you want to show, "loadedCards" only shows the first few so that it doesn't load everything at once.

if card data is loaded after initWithFrame, then make sure the data is included in your custom data array (currently "exampleCardLabels") at the index: yourIndex and then write the code:

DraggableView* newCard = [self createDraggableViewWithDataAtIndex:yourIndex];
[allCards addObject:newCard];
whenever you need to.

I used exampleCardLabels as an example of how to load data, but feel free to change that

Presenting Data in View

Customize the presentation of your data in -(DraggableView *)createDraggableViewWithDataAtIndex:(NSInteger)index in DraggableViewBackground.m (eg: make certain data appear on labels or photos in custom UIImageViews)
to access any card directly, use [loadedCards objectAtIndex:yourIndex]; For example, the card that is currently visible is at [loadedCards firstObject];
