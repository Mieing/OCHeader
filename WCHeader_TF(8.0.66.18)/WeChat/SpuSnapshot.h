@class NSString, Media, EcWxaInfo, SpuCategory;

@interface SpuSnapshot : WXPBGeneratedMessage

@property (nonatomic) unsigned long long spuId;
@property (nonatomic) unsigned long long skuId;
@property (retain, nonatomic) NSString *spuName;
@property (retain, nonatomic) NSString *skuName;
@property (nonatomic) unsigned int productCnt;
@property (retain, nonatomic) Media *primaryMedia;
@property (nonatomic) unsigned long long productAmount;
@property (nonatomic) unsigned long long paymentAmount;
@property (retain, nonatomic) SpuCategory *spuCategory;
@property (retain, nonatomic) EcWxaInfo *wxaInfo;

+ (void)initialize;

@end
