@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeSearchSearchAiShareOutBotMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSNumber *ban_colored_border;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
