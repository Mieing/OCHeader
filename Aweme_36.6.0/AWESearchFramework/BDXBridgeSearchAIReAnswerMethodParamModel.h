@class NSString, NSDictionary;

@interface BDXBridgeSearchAIReAnswerMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSDictionary *server_extra_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
