@class NSString, JumpWxaInfo;

@interface EcShopCard_SimpleProduct : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) unsigned int sellingPrice;
@property (retain, nonatomic) JumpWxaInfo *detailPage;

+ (void)initialize;

@end
