@protocol IESECLiveGoodsPriceModel;

@interface IESECLiveGoodsPriceBuilder : NSObject

@property (weak, nonatomic) id<IESECLiveGoodsPriceModel> priceModel;

- (id)originPrice;
- (id)pricePrefix;
- (id)minSalePrice;
- (id)minSalePriceStr;
- (id)initWithPriceModel:(id)a0;
- (id)maxSalePrice;
- (void).cxx_destruct;

@end
