@class NSString;

@interface AWELuckyCatEnhanceConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isFullEnhance;
@property (nonatomic) long long enhanceRewardAmount;
@property (nonatomic) long long enhanceRewardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
