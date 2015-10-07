//
//  DiaryEntry+CoreDataProperties.h
//  Giornaliero
//
//  Created by Cotten Blackwell on 10/6/15.
//  Copyright © 2015 Cotten Blackwell. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "DiaryEntry.h"

NS_ASSUME_NONNULL_BEGIN

//NS_ENUM(int16_t, DiaryEntryMood) {
//    DiaryEntryMoodGood = 0,
//    DiaryEntryMoodAverage = 1,
//    DiaryEntryMoodBad = 2
//};

enum DiaryEntryMood {
    DiaryEntryMoodGood = 0,
    DiaryEntryMoodAverage = 1,
    DiaryEntryMoodBad = 2
};

@interface DiaryEntry (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *body;
@property (nonatomic) NSTimeInterval date;
@property (nullable, nonatomic, retain) NSData *imageData;
@property (nonatomic) int16_t mood;
@property (nullable, nonatomic, retain) NSString *location;

@property (readonly, nonatomic) NSString *sectionName;

@end

NS_ASSUME_NONNULL_END
