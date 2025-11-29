@class EcRgbaTagMsg, EcShopCard;

@interface GetProfileEcCardResp_ShopCard : WXPBGeneratedMessage

@property (retain, nonatomic) EcShopCard *card;
@property (retain, nonatomic) EcRgbaTagMsg *recommendReason;

+ (void)initialize;

@end
