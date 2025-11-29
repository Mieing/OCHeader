@class NSDictionary;

@interface IESECGoodsDetailAuctionBidMetaModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *businessMeta;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
