@class NSString, NSNumber;

@interface AWELiteStorageXBridgeResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *storageValue;
@property (retain, nonatomic) NSNumber *expired;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
