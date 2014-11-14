#import <Foundation/Foundation.h>

@interface HOUtils : NSObject

+ (void)removeAllChildsOf:view;
+ (SystemSoundID)createSoundID: (NSString*)name;
+ (UIColor*)UIColorFromRGB:(int)rgbValue withAlpha:(float)alpha;
+ (NSInteger)daysBetweenDate:(NSDate*)fromDateTime andDate:(NSDate*)toDateTime;
+ (void)resetDefaults;
+ (NSDate *)combineDate:(NSDate *)date withTime:(NSDate *)time;
+ (BOOL)date:(NSDate*)date isBetweenDate:(NSDate*)beginDate andDate:(NSDate*)endDate;
+ (void)logFonts;
+ (NSDate *) dateWithBaseDate: (NSDate *) baseDate withCalendar: (NSCalendar *)calendar;

@end
