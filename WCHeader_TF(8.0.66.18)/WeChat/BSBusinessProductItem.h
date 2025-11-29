@class NSString;

@interface BSBusinessProductItem : NSObject

@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *sellerName;
@property (retain, nonatomic) NSString *sellerUserName;
@property (nonatomic) unsigned int price;
@property (retain, nonatomic) NSString *productImgUrl;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
