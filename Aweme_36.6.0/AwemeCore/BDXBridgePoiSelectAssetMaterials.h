@class NSString, NSNumber;

@interface BDXBridgePoiSelectAssetMaterials : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *base64;
@property (retain, nonatomic) NSNumber *mediaType;
@property (copy, nonatomic) NSString *contentSource;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *videoCoverURL;
@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSNumber *duration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
