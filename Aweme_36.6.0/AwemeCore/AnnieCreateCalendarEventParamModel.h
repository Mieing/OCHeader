@class NSString, NSNumber;

@interface AnnieCreateCalendarEventParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) NSNumber *alarmOffset;
@property (nonatomic) BOOL allDay;
@property (nonatomic) long long repeatFrequency;
@property (retain, nonatomic) NSNumber *repeatInterval;
@property (retain, nonatomic) NSNumber *repeatCount;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (long long)eventKitRepeatFrequencyType;
- (void).cxx_destruct;
- (id)init;

@end
