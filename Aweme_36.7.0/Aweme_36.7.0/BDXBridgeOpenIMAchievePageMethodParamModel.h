@class NSString, NSDictionary;

@interface BDXBridgeOpenIMAchievePageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *bizExt;
@property (nonatomic) long long scene;

+ (id)requiredKeyPaths;
+ (id)sceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
