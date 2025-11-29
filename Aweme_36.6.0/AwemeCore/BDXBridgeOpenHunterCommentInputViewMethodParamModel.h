@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeOpenHunterCommentInputViewMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *defaultValue;
@property (retain, nonatomic) NSNumber *maxLength;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long scene;

+ (id)requiredKeyPaths;
+ (id)sceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
