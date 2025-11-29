@class AWELuckyCatEnhanceConfig, NSString, AWELuckyCatPendant;

@interface AWELiteEnhancePendant : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enhancePendantCanShow;
@property (nonatomic) BOOL enhancePendantCanShowV2;
@property (nonatomic) long long animationStyle;
@property (nonatomic) long long coinRewardSpeed;
@property (nonatomic) long long playletTaskStatus;
@property (nonatomic) BOOL enhanceManual;
@property (nonatomic) long long enhanceReadTaskDuration;
@property (nonatomic) long long enhanceManualAmount;
@property (nonatomic) BOOL enhanceManualReachMaxAmount;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELuckyCatPendant *pendantAuto;
@property (retain, nonatomic) AWELuckyCatEnhanceConfig *enhanceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
