@class NSString;

@interface IESGCPUploadGameCPImageSelectedPhotoArrayModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *thumbnailWithBase64;
@property (copy, nonatomic) NSString *rawDataUrl;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *rawDataWithBase64;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
