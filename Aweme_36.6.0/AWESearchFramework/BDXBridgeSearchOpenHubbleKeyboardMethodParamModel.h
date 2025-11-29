@class NSString, NSNumber;

@interface BDXBridgeSearchOpenHubbleKeyboardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *clientServerExtra;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *openDeepThink;
@property (copy, nonatomic) NSString *inputHint;
@property (retain, nonatomic) NSNumber *hintOnce;
@property (retain, nonatomic) NSNumber *openSuperAgent;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
