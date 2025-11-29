@class NSArray;

@interface AWEECXBridgeEcGetAddressMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *address_list;

+ (id)address_listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
