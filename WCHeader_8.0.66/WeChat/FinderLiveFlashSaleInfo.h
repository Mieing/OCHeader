@class NSData, FinderLiveFlashSaleProductInfo;

@interface FinderLiveFlashSaleInfo : WXPBGeneratedMessage

@property (readonly, nonatomic) FinderLiveFlashSaleProductInfo *productInfo;
@property (nonatomic) unsigned int cancel;
@property (nonatomic) unsigned int expireTime;
@property (retain, nonatomic) NSData *customBuff;

+ (void)initialize;

@end
