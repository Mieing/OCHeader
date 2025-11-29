@class NSMutableDictionary, AWEUserProfileSpecificationPostContributionGuideTip;

@interface AWEUserProfileSpecificationPostContributionGuideTipModel : AWEUserProfileSpecificationTipModel

@property (nonatomic) long long contributionGuideShowType;
@property (retain, nonatomic) AWEUserProfileSpecificationPostContributionGuideTip *publishGuideTip;
@property (retain, nonatomic) NSMutableDictionary *deallocBlockDict;

+ (id)publishGuideTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)dealloc;

@end
