@class NSURL, NSString, UIImage;
@protocol ACCPublishRepository;

@interface ACCRepoLivePhotoInfoInstanceModel : NSObject <NSCopying, ACCRepositoryContextDeprecated, ACCRepoLivePhotoInfoInstanceModelData, ACCRepoRegister>

@property (nonatomic) unsigned long long imageAlbumLivePhotoMode;
@property (retain, nonatomic) NSURL *livePhotoVideoSourceUrl;
@property (retain, nonatomic) NSURL *livePhotoImageSourceUrl;
@property (retain, nonatomic) NSURL *originLivePhotoVideoSourceUrl;
@property (retain, nonatomic) NSURL *originLivePhotoImageSourceUrl;
@property (nonatomic) BOOL didHandleLivePhotoToImageAlbum;
@property (nonatomic) BOOL disableCacheLiveMode;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) NSString *phAssetLocalIdentifier;
@property (retain, nonatomic) NSString *compressedImageFilePath;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageScale;
@property (nonatomic) double imageDuration;
@property (nonatomic) double cameraShutterTimeStamp;
@property (nonatomic) long long mixVideoClipLiveCount;
@property (nonatomic) BOOL isRealLivePhoto;
@property (retain, nonatomic) UIImage *livePhotoProcessedImage;
@property (nonatomic) BOOL isFromUpload;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (BOOL)isLivephotoMode;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)hasSafetyLivePhotoData;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
