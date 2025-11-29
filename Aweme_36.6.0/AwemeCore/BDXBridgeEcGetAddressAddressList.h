@class NSString, NSDictionary;

@interface BDXBridgeEcGetAddressAddressList : BDXBridgeModel

@property (copy, nonatomic) NSString *biz_code;
@property (copy, nonatomic) NSDictionary *address;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
