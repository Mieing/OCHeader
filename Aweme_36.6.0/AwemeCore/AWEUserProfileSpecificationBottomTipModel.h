@class AWEUserProfileSpecificationBottomTip;

@interface AWEUserProfileSpecificationBottomTipModel : AWEUserProfileSpecificationTipModel

@property (retain, nonatomic) AWEUserProfileSpecificationBottomTip *pushTip;

+ (id)pushTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
