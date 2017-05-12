//
//  ViewController.m
//  Test_verbat
//
//  Created by Guna Sundari on 12/05/17.
//  Copyright © 2017 Guna Sundari. All rights reserved.
//

#import "ViewController.h"
#import "DraggableViewBackground.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    DraggableViewBackground *draggableBackground = [[DraggableViewBackground alloc]initWithFrame:self.view.frame];
    [self.view addSubview:draggableBackground];
}
@end
