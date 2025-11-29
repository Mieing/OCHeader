@class NSString, NSNumber;

@interface IESGCPOpenGameCPPhotoAlbumSelectedPhotoArrayModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *thumbnailWithBase64;
@property (copy, nonatomic) NSString *rawDataUrl;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *rawDataWithBase64;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
