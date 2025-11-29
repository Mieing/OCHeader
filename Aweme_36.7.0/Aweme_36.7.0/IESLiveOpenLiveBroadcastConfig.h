@class NSString, NSDictionary, NSDate, NSNumber;

@interface IESLiveOpenLiveBroadcastConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *masterSwitch;
@property (retain, nonatomic) NSNumber *profileSwitch;
@property (retain, nonatomic) NSNumber *reminderSwitch;
@property (retain, nonatomic) NSNumber *reminderSwitchEnable;
@property (copy, nonatomic) NSString *scheduledTime;
@property (retain, nonatomic) NSNumber *scheduleDays;
@property (copy, nonatomic) NSString *scheduleText;
@property (copy, nonatomic) NSString *scheduleTimeText;
@property (copy, nonatomic) NSString *scheduleDayText;
@property (retain, nonatomic) NSDate *scheduleOneDay;
@property (retain, nonatomic) id rawData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValid:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
