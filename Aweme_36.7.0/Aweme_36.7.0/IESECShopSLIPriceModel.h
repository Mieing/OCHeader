@class NSNumber, NSString;

@interface IESECShopSLIPriceModel : NSObject <IESECGoodsPriceLabelModel>

@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (copy, nonatomic) NSString *priceDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
