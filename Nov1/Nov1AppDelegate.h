//
//  Nov1AppDelegate.h
//  Nov1
//
//  Created by Samantha Kapai on 12/20/12.
//  Copyright (c) 2012 Samantha Kapai. All rights reserved.
//

#import <UIKit/UIKit.h>
@class View;

@interface Nov1AppDelegate: UIResponder <UIApplicationDelegate> {
	View *view;
	UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;
@end
