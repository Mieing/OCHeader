@class NSString, NSDictionary;

@interface BDXBridgeDownloadFileMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *extension;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSString *saveToAlbum;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
