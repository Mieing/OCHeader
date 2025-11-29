@class NSString;

@interface AWELiteShareVideoConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long nExposureToExit;
@property (nonatomic) long long tempExitDuration;
@property (nonatomic) long long nToExitForever;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL activityDisabled;
@property (copy, nonatomic) NSString *shareDomainId;
@property (copy, nonatomic) NSString *activityKey;
@property (copy, nonatomic) NSString *inviteFrom;
@property (copy, nonatomic) NSString *behaviorId;
@property (nonatomic) long long playProgressPercent;
@property (nonatomic) long long nVideoShare;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSString *space;
@property (copy, nonatomic) NSString *scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
