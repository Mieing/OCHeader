@class NSString, NSNumber;

@interface BDXBridgeEcTabDidChangedCurrentTab : BDXBridgeModel

@property (copy, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSNumber *tabOrder;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
