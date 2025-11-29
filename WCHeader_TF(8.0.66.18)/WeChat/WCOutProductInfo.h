@class NSString, SKProduct;

@interface WCOutProductInfo : NSObject

@property (retain, nonatomic) NSString *pId;
@property (retain, nonatomic) NSString *price;
@property (nonatomic) unsigned int minutes;
@property (retain, nonatomic) NSString *priceExtra;
@property (retain, nonatomic) NSString *discountWording;
@property (retain, nonatomic) SKProduct *appSKProduct;
@property (nonatomic) long long buttonTagID;
@property (retain, nonatomic) NSString *discountMD5;
@property (retain, nonatomic) NSString *webPayListUrl;

- (void).cxx_destruct;

@end
