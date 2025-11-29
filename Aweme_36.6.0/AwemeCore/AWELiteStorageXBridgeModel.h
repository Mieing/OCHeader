@class NSString, NSNumber;

@interface AWELiteStorageXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) NSNumber *expired;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
