@class NSString;

@interface AWEDTOLivePhotoInfoInstanceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imageAlbumLivePhotoMode;
@property (copy, nonatomic) NSString *livePhotoVideoSourceUrl;
@property (copy, nonatomic) NSString *livePhotoImageSourceUrl;
@property (nonatomic) BOOL didHandleLivePhotoToImageAlbum;
@property (nonatomic) BOOL disableCacheLiveMode;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) NSString *phAssetLocalIdentifier;
@property (copy, nonatomic) NSString *compressedImageFilePath;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageScale;
@property (nonatomic) double imageDuration;
@property (nonatomic) double cameraShutterTimeStamp;
@property (copy, nonatomic) NSString *originLivePhotoVideoSourceUrl;
@property (copy, nonatomic) NSString *originLivePhotoImageSourceUrl;
@property (nonatomic) BOOL isRealLivePhoto;
@property (nonatomic) BOOL isFromUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
