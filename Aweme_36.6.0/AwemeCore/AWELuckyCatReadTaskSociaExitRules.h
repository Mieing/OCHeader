@class NSString;

@interface AWELuckyCatReadTaskSociaExitRules : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long ineffectiveDisplayDays;
@property (nonatomic) long long displayDaysCoolDownHours;
@property (nonatomic) long long ineffectiveDisplayTimes;
@property (nonatomic) long long displayTimesCoolDownHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
