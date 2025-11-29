@class NSString;

@interface AWETimingCloseAlertConfigModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL enableTimingClose;
@property (readonly, nonatomic) BOOL enableAvoid;
@property (readonly, nonatomic) BOOL popupCountdown;
@property (readonly, nonatomic) long long countDownTime;
@property (readonly, nonatomic) long long backgroundLimitDuration;
@property (readonly, copy, nonatomic) NSString *primaryTitle;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, copy, nonatomic) NSString *leftButtonTitle;
@property (readonly, copy, nonatomic) NSString *rightButtonTitle;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, copy, nonatomic) NSString *linkSchema;
@property (readonly, nonatomic) long long pollingTimes;
@property (readonly, nonatomic) long long pollingInterval;
@property (readonly, nonatomic) long long screenOffTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
