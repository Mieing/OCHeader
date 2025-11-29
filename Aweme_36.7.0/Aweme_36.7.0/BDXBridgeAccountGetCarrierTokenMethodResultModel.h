@class NSString;

@interface BDXBridgeAccountGetCarrierTokenMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long carrier;
@property (nonatomic) long long result;

+ (id)resultJSONTransformer;
+ (id)carrierJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
