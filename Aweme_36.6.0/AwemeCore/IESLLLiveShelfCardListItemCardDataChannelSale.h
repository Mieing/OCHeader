@class NSNumber, NSString;

@interface IESLLLiveShelfCardListItemCardDataChannelSale : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *startQuantity;
@property (copy, nonatomic) NSNumber *leftQuantity;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSNumber *postPrice;
@property (copy, nonatomic) NSString *couponID;
@property (copy, nonatomic) NSNumber *couponType;
@property (copy, nonatomic) NSString *couponName;
@property (copy, nonatomic) NSString *couponText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
