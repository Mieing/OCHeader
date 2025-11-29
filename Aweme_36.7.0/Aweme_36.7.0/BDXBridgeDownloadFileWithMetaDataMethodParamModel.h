@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeDownloadFileWithMetaDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *extension;
@property (retain, nonatomic) NSNumber *needCommonParams;
@property (copy, nonatomic) NSString *saveToAlbum;
@property (copy, nonatomic) NSString *customAttr;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
