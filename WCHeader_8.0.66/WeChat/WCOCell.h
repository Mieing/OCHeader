@class NSString;

@interface WCOCell : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int callTime;
@property (retain, nonatomic) NSString *sellingPrice;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *priceExtra;
@property (retain, nonatomic) NSString *discountWording;
@property (retain, nonatomic) NSString *discountMd5;
@property (retain, nonatomic) NSString *webPayUrl;

+ (void)initialize;

@end
