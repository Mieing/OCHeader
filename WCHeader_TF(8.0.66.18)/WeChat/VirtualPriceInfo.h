@class NSString;

@interface VirtualPriceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *priceUnit;
@property (nonatomic) unsigned long long sellingPrice;
@property (retain, nonatomic) NSString *sellingPriceWording;

+ (void)initialize;

@end
