@class NSMutableArray, GetProfileEcCardResp_ShopCard;

@interface GetProfileEcCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) GetProfileEcCardResp_ShopCard *shopCard;
@property (retain, nonatomic) NSMutableArray *productCards;

+ (void)initialize;

- (void)setProductCards:(id)a0;
- (id)productCards;
- (void)setShopCard:(id)a0;
- (id)shopCard;

@end
