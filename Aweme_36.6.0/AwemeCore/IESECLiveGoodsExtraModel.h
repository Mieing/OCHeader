@class NSString;

@interface IESECLiveGoodsExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *notAvailableReason;
@property (nonatomic) double operateTime;
@property (copy, nonatomic) NSString *showNotice;
@property (retain, nonatomic) NSString *couponThresholdPrice;
@property (copy, nonatomic) NSString *hasDiscount;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *originType;
@property (copy, nonatomic) NSString *trackExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operateTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
