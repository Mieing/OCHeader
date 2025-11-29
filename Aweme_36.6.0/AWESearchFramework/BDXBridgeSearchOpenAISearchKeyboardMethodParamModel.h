@class NSString, NSArray, BDXBridgeSearchOpenAISearchKeyboardLogExtra, BDXBridgeSearchOpenAISearchKeyboardPatternExtra;

@interface BDXBridgeSearchOpenAISearchKeyboardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *clientServerExtra;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) BDXBridgeSearchOpenAISearchKeyboardPatternExtra *patternExtra;
@property (retain, nonatomic) NSArray *disableFunctions;
@property (retain, nonatomic) NSArray *queries;
@property (retain, nonatomic) BDXBridgeSearchOpenAISearchKeyboardLogExtra *logExtra;

+ (id)requiredKeyPaths;
+ (id)patternExtraJSONTransformer;
+ (id)queriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)logExtraJSONTransformer;

- (void).cxx_destruct;

@end
