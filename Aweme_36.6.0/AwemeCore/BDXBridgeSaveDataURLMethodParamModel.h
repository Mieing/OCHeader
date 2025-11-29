@class NSString, NSNumber;

@interface BDXBridgeSaveDataURLMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *dataURL;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *extension;
@property (copy, nonatomic) NSString *saveToAlbum;
@property (retain, nonatomic) NSNumber *isCached;
@property (copy, nonatomic) NSString *saveToDir;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
