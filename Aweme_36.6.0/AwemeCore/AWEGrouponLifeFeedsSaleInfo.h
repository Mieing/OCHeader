@class NSDictionary, AWEGrouponLifeFeedsRightInfo;

@interface AWEGrouponLifeFeedsSaleInfo : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *priceInfo;
@property (retain, nonatomic) AWEGrouponLifeFeedsRightInfo *rightInfo;
@property (nonatomic) double saleHeight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
