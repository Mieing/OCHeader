@class NSString;

@interface AWEECOMIMDetailNoticeConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL enablePushTipsRemoveRule;
@property (nonatomic) long long exposeTimes;
@property (nonatomic) double exposeRefreshTime;
@property (nonatomic) long long exposeTimesDisappearForever;
@property (nonatomic) double closeRefreshTime;
@property (nonatomic) long long closeTimesDisappearForever;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
