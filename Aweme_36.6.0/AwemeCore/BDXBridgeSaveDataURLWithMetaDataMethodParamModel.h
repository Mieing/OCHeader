@class NSString;

@interface BDXBridgeSaveDataURLWithMetaDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *dataURL;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *extension;
@property (copy, nonatomic) NSString *saveToAlbum;
@property (copy, nonatomic) NSString *customAttr;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
