@class NSString, NSDictionary;

@interface BDXBridgeJingxuanStartSpeechRecognitionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appToken;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSDictionary *requestParam;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
