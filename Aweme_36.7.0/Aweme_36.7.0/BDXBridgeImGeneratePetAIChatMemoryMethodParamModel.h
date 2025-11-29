@class NSString;

@interface BDXBridgeImGeneratePetAIChatMemoryMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *messageRange;
@property (copy, nonatomic) NSString *conShortId;
@property (copy, nonatomic) NSString *conId;
@property (nonatomic) BOOL needGenTopic;
@property (nonatomic) BOOL needGenArchive;
@property (nonatomic) long long scene;

+ (id)requiredKeyPaths;
+ (id)sceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
