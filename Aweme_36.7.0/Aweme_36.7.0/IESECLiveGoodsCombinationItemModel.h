@class NSString, NSNumber;

@interface IESECLiveGoodsCombinationItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (nonatomic) long long goodsState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
