//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Jose D Leal on 5/31/14.
//  Copyright (c) 2014 PpDs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
