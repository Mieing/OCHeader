@class NSString, NSNumber;

@interface BDXBridgeKefuCloseWindowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *windowId;
@property (retain, nonatomic) NSNumber *closeAll;
@property (copy, nonatomic) NSString *reason;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
