@class NSString, NSNumber;

@interface AWELifeShelfCardListItemCardDataFlashSale : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *endTime;
@property (copy, nonatomic) NSString *flashSaleId;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSNumber *flashSalePrice;
@property (nonatomic) BOOL needWarmUp;
@property (copy, nonatomic) NSNumber *startQuantity;
@property (copy, nonatomic) NSNumber *leftQuantity;
@property (copy, nonatomic) NSNumber *quantityPercentage;
@property (copy, nonatomic) NSNumber *warnUpSeconds;
@property (copy, nonatomic) NSString *flashSalePriceStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
