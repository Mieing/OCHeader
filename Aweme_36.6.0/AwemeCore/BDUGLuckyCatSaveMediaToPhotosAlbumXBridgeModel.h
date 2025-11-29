@class NSString;

@interface BDUGLuckyCatSaveMediaToPhotosAlbumXBridgeModel : BDXBridgeModel

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *targetFileName;
@property (nonatomic) BOOL cacheForShare;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
