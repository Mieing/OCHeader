@class NSString, AWEURLModel;

@interface AWEMixCreateRecommendTipModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (copy, nonatomic) NSString *mainTips;
@property (copy, nonatomic) NSString *vvTips;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
