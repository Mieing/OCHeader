@class NSString, NSArray;

@interface BDXBridgeKefuShowWindowPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *windowId;
@property (retain, nonatomic) NSArray *iOSRecoverTypes;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
