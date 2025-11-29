@class NSString, NSNumber;

@interface IESLLLiveFlashSaleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long flashSalePrice;
@property (copy, nonatomic) NSString *startTime;
@property (copy, nonatomic) NSString *endTime;
@property (copy, nonatomic) NSString *flashSaleId;
@property (copy, nonatomic) NSNumber *startQuantity;
@property (copy, nonatomic) NSNumber *leftQuantity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
