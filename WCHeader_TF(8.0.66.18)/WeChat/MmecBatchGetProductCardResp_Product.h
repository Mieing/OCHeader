@class EcProductCard, MmecBatchGetProductCardResp_Live;

@interface MmecBatchGetProductCardResp_Product : WXPBGeneratedMessage

@property (retain, nonatomic) EcProductCard *productCard;
@property (retain, nonatomic) MmecBatchGetProductCardResp_Live *live;
@property (nonatomic) int ret;
@property (nonatomic) BOOL requestWhenClick;

+ (void)initialize;

@end
