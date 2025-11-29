@class NSString, EcShopCard;

@interface MmecBatchGetShopCardResp_Shop : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardKey;
@property (retain, nonatomic) EcShopCard *shopCard;
@property (nonatomic) int ret;

+ (void)initialize;

@end
