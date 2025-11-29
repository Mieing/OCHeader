@class NSString;

@interface BDXBridgeSearchGoMusicSearchResultMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long enter_method;

+ (id)requiredKeyPaths;
+ (id)enter_methodJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
