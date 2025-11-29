@class NSString, NSNumber;

@interface IESLLLiveShelfCardElementSeckillModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;
@property (copy, nonatomic) NSNumber *leftInventory;
@property (copy, nonatomic) NSNumber *flashSalePrice;
@property (nonatomic) BOOL needWarmUp;
@property (copy, nonatomic) NSNumber *quantityPercentage;
@property (copy, nonatomic) NSNumber *warmUpSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
