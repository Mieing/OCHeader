@class NSString;

@interface WCOPackageProduct : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *countryFlagImgUrl;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *productId;

+ (void)initialize;

@end
