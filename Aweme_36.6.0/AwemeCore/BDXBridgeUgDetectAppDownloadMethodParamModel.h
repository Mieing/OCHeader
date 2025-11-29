@class NSString;

@interface BDXBridgeUgDetectAppDownloadMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *detectId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *pageName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
