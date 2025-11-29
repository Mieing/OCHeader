@class NSString;

@interface AWEAntiAddictDailyAlertUIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long dayDefaultRemindInterval;
@property (copy, nonatomic) NSString *dayPrimaryTitle;
@property (copy, nonatomic) NSString *daySecondaryTitle;
@property (nonatomic) long long nightDefaultSleepTime;
@property (copy, nonatomic) NSString *nightPrimaryTitle;
@property (copy, nonatomic) NSString *nightSecondaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
