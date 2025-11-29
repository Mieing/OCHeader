@class NSString;

@interface BDXBridgeUpdateGeckoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) BOOL enableDownloadAutoRetry;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
