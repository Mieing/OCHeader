@class NSString, NSNumber;

@interface BDXBridgePoiUploadFileMaterials : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *contentSource;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
