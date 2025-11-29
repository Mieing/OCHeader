@class NSString, NSNumber;

@interface BDXBridgeScanBarcodeMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *msg;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
