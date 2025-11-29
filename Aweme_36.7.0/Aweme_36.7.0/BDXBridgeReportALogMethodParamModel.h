@class NSString, BDXBridgeReportALogCodePosition;

@interface BDXBridgeReportALogMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) BDXBridgeReportALogCodePosition *codePosition;
@property (nonatomic) long long level;

+ (id)requiredKeyPaths;
+ (id)levelJSONTransformer;
+ (id)codePositionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
