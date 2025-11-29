@class NSString;

@interface BDXBridgeSetElderModeStateMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL toState;
@property (nonatomic) BOOL shouldDelayEffect;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
