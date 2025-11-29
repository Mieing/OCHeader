@class UIImage, NSMutableDictionary, NSString;
@protocol HTSKVStore, IESLiveEffectPlatformService;

@interface IESLiveInteractiveVirtualAvatarPreviewStore : NSObject <IESLiveMultiAudioAction>

@property (retain, nonatomic) NSMutableDictionary *effectDownloadingFlagMap;
@property (retain, nonatomic) NSMutableDictionary *effectDownloadCompletionMap;
@property (retain, nonatomic) NSMutableDictionary *avatarModelMap;
@property (weak, nonatomic) id<IESLiveEffectPlatformService> effectDownloader;
@property (weak, nonatomic) id<HTSKVStore> kvStore;
@property (nonatomic) BOOL firstChosenAvatarSingMode;
@property (nonatomic) BOOL takPhotoInAvatarAuthorized;
@property (nonatomic) BOOL pickLibraryInAvatarAuthorized;
@property (nonatomic) BOOL hasAvatarResultImage;
@property (retain, nonatomic) UIImage *avatarResultImage;
@property (nonatomic) BOOL realTimeAvatarEnabled;
@property (copy, nonatomic) NSString *avatarCustomConfig;
@property (nonatomic) long long avatarAuditStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)p_cacheKey:(id)a0;
- (id)p_cacheContainerDirPath;
- (void)fetchEffectModelWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)saveImage:(id)a0 fileName:(id)a1 completion:(id /* block */)a2;
- (long long)avatarUserGender;
- (void)saveAvatarScanImage:(id)a0 completion:(id /* block */)a1;
- (void)loadModelWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)modelFilePathWithIdentifier:(id)a0;
- (void)p_saveEffectModel:(id)a0 model:(id)a1;
- (id)p_fullCachePathWithFileName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
