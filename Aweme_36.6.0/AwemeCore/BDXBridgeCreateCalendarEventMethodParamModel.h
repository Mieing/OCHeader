@class NSString, NSNumber;

@interface BDXBridgeCreateCalendarEventMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *repeatInterval;
@property (retain, nonatomic) NSNumber *repeatCount;
@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (retain, nonatomic) NSNumber *alarmOffset;
@property (retain, nonatomic) NSNumber *allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *calendarName;
@property (nonatomic) long long repeatFrequency;

+ (id)requiredKeyPaths;
+ (id)repeatFrequencyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)eventKitRepeatFrequencyType;
- (void).cxx_destruct;

@end
