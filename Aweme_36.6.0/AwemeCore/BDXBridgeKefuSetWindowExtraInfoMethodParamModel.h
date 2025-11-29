@class NSString, NSDictionary;

@interface BDXBridgeKefuSetWindowExtraInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *windowId;
@property (copy, nonatomic) NSDictionary *windowExtraInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
