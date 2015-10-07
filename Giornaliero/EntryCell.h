//
//  EntryCell.h
//  Giornaliero
//
//  Created by Cotten Blackwell on 10/6/15.
//  Copyright © 2015 Cotten Blackwell. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DiaryEntry;

@interface EntryCell : UITableViewCell

+(CGFloat)heightForEntry:(DiaryEntry *)entry;

-(void)configureCellForEntry:(DiaryEntry *)entry;

@end
