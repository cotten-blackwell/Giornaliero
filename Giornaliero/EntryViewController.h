//
//  EntryViewController.h
//  Giornaliero
//
//  Created by Cotten Blackwell on 10/6/15.
//  Copyright © 2015 Cotten Blackwell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiaryEntry;

@interface EntryViewController : UIViewController

@property (strong, nonatomic) DiaryEntry *entry;

- (IBAction)doneWasPressed:(id)sender;
- (IBAction)cancelWasPressed:(id)sender;

@end
