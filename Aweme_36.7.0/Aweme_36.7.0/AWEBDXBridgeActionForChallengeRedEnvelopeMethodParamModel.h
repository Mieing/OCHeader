@class NSString;

@interface AWEBDXBridgeActionForChallengeRedEnvelopeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL hasShowPanel;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long actionType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
