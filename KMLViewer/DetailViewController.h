//
//  DetailViewController.h
//  KMLViewer
//
//  Created by NextBusinessSystem on 11/12/01.
//  Copyright (c) 2011 NextBusinessSystem Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KMLAbstractGeometry.h"

@interface DetailViewController : UIViewController

@property (strong) KMLAbstractGeometry *geometry;

@end
