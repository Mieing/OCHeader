@class NSString, IESECLiveGoodsExtraModel, NSDictionary, NSNumber;

@interface IESECLiveGoodsPriceInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productID;
@property (copy, nonatomic) NSString *priceHeader;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *minPriceStr;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (retain, nonatomic) IESECLiveGoodsExtraModel *extra;
@property (retain, nonatomic) NSDictionary *updatedEventParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
