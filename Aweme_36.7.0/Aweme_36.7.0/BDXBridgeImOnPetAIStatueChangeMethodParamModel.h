@class NSString;

@interface BDXBridgeImOnPetAIStatueChangeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conId;
@property (copy, nonatomic) NSString *conShortId;
@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isOpenMemory;
@property (nonatomic) BOOL featureEnable;
@property (copy, nonatomic) NSString *scene;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
