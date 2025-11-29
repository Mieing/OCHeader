@class NSArray, IESECLongContentLabelElement;

@interface IESECGoodsDetailAuctionBidModel : IESECBaseApiModel

@property (retain, nonatomic) IESECLongContentLabelElement *titleElement;
@property (retain, nonatomic) NSArray *contentArray;

+ (id)contentArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
