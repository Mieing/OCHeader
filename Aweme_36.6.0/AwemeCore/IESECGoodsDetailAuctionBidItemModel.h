@class IESECPriceElement, IESECTextElement, IESECLongContentLabelElement;

@interface IESECGoodsDetailAuctionBidItemModel : IESECBaseApiModel

@property (retain, nonatomic) IESECPriceElement *priceElement;
@property (retain, nonatomic) IESECLongContentLabelElement *authorElement;
@property (retain, nonatomic) IESECTextElement *timeElement;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
