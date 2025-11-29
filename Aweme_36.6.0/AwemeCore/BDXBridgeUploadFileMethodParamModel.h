@class NSString, NSDictionary;

@interface BDXBridgeUploadFileMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (nonatomic) BOOL addCommonParams;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) long long fileType;
@property (nonatomic) BOOL shouldUploadRawFile;
@property (nonatomic) double timeoutInterval;

+ (id)requiredKeyPaths;
+ (id)fileTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
