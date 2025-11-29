@class NSString, Media;

@interface EcCustomerOrderInfo_ProductSnapshot : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *spuId;
@property (retain, nonatomic) NSString *skuId;
@property (retain, nonatomic) NSString *spuName;
@property (retain, nonatomic) NSString *skuName;
@property (nonatomic) unsigned int productCnt;
@property (retain, nonatomic) Media *primaryMedia;

+ (void)initialize;

@end
