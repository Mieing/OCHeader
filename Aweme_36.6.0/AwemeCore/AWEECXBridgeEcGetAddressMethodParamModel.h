@class NSNumber, NSString;

@interface AWEECXBridgeEcGetAddressMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *address_type;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL need_detail;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
