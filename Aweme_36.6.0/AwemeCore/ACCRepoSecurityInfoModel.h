@class NSString, NSArray, RACSignal, NSMutableArray;
@protocol ACCPublishRepository, ACCWorkspaceReader, ACCRepoDataContext;

@interface ACCRepoSecurityInfoModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepoRegister, ACCCreationDataAccess, NSCopying, ACCRepoSecurityData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *bgStickerImageAssests;
@property (copy, nonatomic) NSArray *bgStickerVideoAssests;
@property (retain, nonatomic) NSMutableArray *bgStickerVideoAssetsClipDuration;
@property (nonatomic) long long shouldUploadOriginFrame;
@property (nonatomic) long long shouldUploadOriginAudio;
@property (nonatomic) long long shouldUploadOriginImage;
@property (copy, nonatomic) NSString *shootPhotoFramePath;
@property (copy, nonatomic) NSString *secondShootPhotoFramePath;
@property (nonatomic) BOOL needUploadAudioFrames;
@property (retain, nonatomic) NSArray *ecommerceShareOrderFragmentInfo;
@property (weak, nonatomic) RACSignal *shootPhotoFrameSignal;
@property (weak, nonatomic) RACSignal *secondShootPhotoFrameSignal;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (BOOL)hasCanvansPublishAsImageAlbumFrame;
- (BOOL)needUploadOriginFrameWithProject:(id)a0;
- (id)videoPublishViewModel;
- (BOOL)p_isPublishCanvasAsImageAlbumMode;
- (BOOL)p_isImageUnifyAndHasEditorEffectMusic;
- (BOOL)checkNeedUploadFramesForRecordVideos;
- (BOOL)checkNeedUploadFramesForCanvasVideos:(id)a0;
- (BOOL)checkNeedUploadFramesForUploadVideos:(id)a0;
- (BOOL)checkNeedUploadFramesForAdvanceEdit:(id)a0;
- (BOOL)checkNeedUploadFramesForCloseFriends;
- (BOOL)checkNeedUploadFramesForVideoCover;
- (BOOL)checkNeedUploadFramesForUniversalEdit:(id)a0;
- (BOOL)isSourceTakePhotoAndHasAnyPropFrames;
- (id)frameCheckString;
- (id)slidesCheckItems;
- (BOOL)needUploadOriginFrame;
- (BOOL)needUploadOriginalImage;
- (id)photoDurations;
- (void)checkVideoFeedType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
