@class NSString, AWECommentLynxEggVideoEffectModel;

@interface AWECommentLynxEggModel : AWEBaseApiModel

@property (nonatomic) unsigned long long effectType;
@property (retain, nonatomic) AWECommentLynxEggVideoEffectModel *videoEffect;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *milestoneType;

+ (id)videoEffectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
