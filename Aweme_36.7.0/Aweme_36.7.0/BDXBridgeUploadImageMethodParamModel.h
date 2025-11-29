@class NSString, NSDictionary, NSArray;

@interface BDXBridgeUploadImageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSArray *formDataBody;

+ (id)requiredKeyPaths;
+ (id)formDataBodyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
