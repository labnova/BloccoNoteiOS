//
//  XYZDetailViewController.h
//  BloccoNote
//
//  Created by Innocenzo Tremamondo on 18/07/14.
//  Copyright (c) 2014 LabNova. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
