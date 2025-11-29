@class NSString, NSArray;

@interface IESECLiveGoodsProductInfo : NSObject

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *skuID;
@property (nonatomic) unsigned long long explainType;
@property (retain, nonatomic) NSArray *payLoad;
@property (nonatomic) BOOL priceCondition;

+ (id)productInfoFromGoodsModel:(id)a0 payLoadUpdateType:(long long)a1;

- (void).cxx_destruct;

@end
