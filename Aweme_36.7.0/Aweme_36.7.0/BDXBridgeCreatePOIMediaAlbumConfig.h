@class NSNumber;

@interface BDXBridgeCreatePOIMediaAlbumConfig : BDXBridgeModel

@property (nonatomic) BOOL supportAlbum;
@property (retain, nonatomic) NSNumber *maxCount;
@property (retain, nonatomic) NSNumber *maxPhotoCount;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
