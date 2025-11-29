@class NSArray, NSString, NSURL, NSDate;

@interface BDCalendarEventModel : NSObject

@property (copy, nonatomic) NSArray *alarms;
@property (copy, nonatomic) NSArray *recurrenceRules;
@property (copy, nonatomic) NSString *eventIdentifier;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSURL *URL;

- (void)addAlarmsWithRelativeOffsets:(id)a0;
- (void)addRecurrenceRuleWithInterval:(long long)a0 repeatCount:(long long)a1 frequency:(long long)a2;
- (void).cxx_destruct;

@end
