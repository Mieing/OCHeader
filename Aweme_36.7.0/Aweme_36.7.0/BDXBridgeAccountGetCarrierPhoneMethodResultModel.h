@class NSString;

@interface BDXBridgeAccountGetCarrierPhoneMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *phone;
@property (nonatomic) long long carrier;
@property (nonatomic) long long result;

+ (id)resultJSONTransformer;
+ (id)carrierJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
