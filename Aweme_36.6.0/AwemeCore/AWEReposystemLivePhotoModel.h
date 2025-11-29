@class NSString, UIImage, RACSignal;

@interface AWEReposystemLivePhotoModel : NSObject <AWERepositoryDraftProtocol, NSCopying, ACCRepoRegister, ACCRepositoryDraftContextDeprecated, ACCRepositoryTrackContextDeprecated, ACCRepoSystemLivePhotoData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSystemLivePhoto;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIImage *videoFrameImage;
@property (copy, nonatomic) NSString *videoFramePath;
@property (nonatomic) double cameraShutterTimeStamp;
@property (nonatomic) long long trackErrorType;
@property (nonatomic) BOOL trackLivePhoto;
@property (copy, nonatomic) NSString *systemLivePhotoVideoFramePath;
@property (weak, nonatomic) RACSignal *systemLivePhotovideoFramePathSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
