
Verbat-guna-s
======================
![alt tag](http://i.imgur.com/iMovCSI.gif)



Features:
* Swipe cards left or right to call two separate actions
* Have multiple cards on screen depending on the number of items in an array
* Extremely simple, every component is explained
* Very easily customizeable





in DraggableView.h

* ACTION_MARGIN: distance from center where the action applies. Higher = swipe further in order for the action to be called
* SCALE_STRENGTH: how quickly the card shrinks. Higher = slower shrinking
* SCALE_MAX: upper bar for how much the card shrinks. Higher = shrinks less
* ROTATION_MAX: the maximum rotation allowed in radians.  Higher = card can keep rotating longer
* ROTATION_STRENGTH: strength of rotation. Higher = weaker rotation
* ROTATION_ANGLE: Higher = stronger rotation angle

Each component is also explained thoroughly, so it is highly customizeable in many ways


# How to use

__files__
* **ViewController.h/m**: example view controller (not necessary)
* **DraggableViewBackground.h/m**: UIView that holds the DraggableView.  This can be put ontop of view controllers or you can set it as the main view of your view controller
* **DraggableView.h/m**: UIView of the draggable cards

__Setup as View Controller (see ViewController.m)__
  ``` objc
  DraggableViewBackground *draggableBackground = [[DraggableViewBackground alloc]initWithFrame:self.view.frame];
  [self.view addSubview:draggableBackground];
  ```
  
__Setup as UIView ontop of View Controller__
  ``` objc
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
  ```
## Presenting Your Data
__Loading Data__
* edit -(void)loadCards in DraggableViewBackground.m to dictate what information is loaded and how
* "allCards" holds all the cards you want to show, "loadedCards" only shows the first few so that it doesn't load everything at once.
* if card data is loaded after initWithFrame, then make sure the data is included in your custom data array (currently "exampleCardLabels") at the index: yourIndex and then write the code:

  ``` objc
  DraggableView* newCard = [self createDraggableViewWithDataAtIndex:yourIndex];
  [allCards addObject:newCard];
  ```
  
