@class NSString;

@interface IESLLPOICollectRuleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long maxFrequencyPerDay;
@property (nonatomic) long long maxContinuousShowWithoutCollect;
@property (nonatomic) long long maxDisableDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
