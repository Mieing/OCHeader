@class NSString;

@interface BusinessProductItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *sellerName;
@property (retain, nonatomic) NSString *sellerUserName;
@property (nonatomic) unsigned int price;
@property (retain, nonatomic) NSString *productImgUrl;

+ (void)initialize;

@end
