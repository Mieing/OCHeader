@class NSString, NSArray, NSDictionary;

@interface AWEXBridgePdaOpenVideoDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *currentAwemeId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *serverInnerJumpParams;
@property (retain, nonatomic) NSArray *awemeIdList;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (copy, nonatomic) NSDictionary *extraParam;
@property (nonatomic) long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
