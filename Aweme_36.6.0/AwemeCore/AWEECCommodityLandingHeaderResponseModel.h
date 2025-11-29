@class AWEECCommodityLandingHeaderModel, AWEECCommodityLandingHeaderCollection;

@interface AWEECCommodityLandingHeaderResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEECCommodityLandingHeaderModel *header;
@property (retain, nonatomic) AWEECCommodityLandingHeaderCollection *collection;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
