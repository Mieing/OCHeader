@class NSString;
@protocol HTSKVStore, IESLiveInteractVideoCaptureRouter, IESLiveMultiKTVRouter;

@interface IESLiveMultiKTVSingModeSwitch : NSObject <IESLiveMultiKTVSingModeSwitch>

@property (nonatomic) int cachedSingMode;
@property (nonatomic) long long userGender;
@property (weak, nonatomic) id<HTSKVStore> kvStore;
@property (weak, nonatomic) id<IESLiveInteractVideoCaptureRouter> captureRouter;
@property (weak, nonatomic) id<IESLiveMultiKTVRouter> multiKTVRouter;
@property (nonatomic) BOOL videoSingModeBannedByOther;
@property (nonatomic) BOOL stagedRealTimeAvatarEnabled;
@property (nonatomic) BOOL avatarGuideBubbleShown4Audience;
@property (nonatomic) int singMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)didSetAttachingDIContext;
- (id)p_cacheKey:(id)a0;
- (BOOL)localAvatarResultModelExist;
- (void)prefetchAvatarResources;
- (void)resetPerLive;
- (void)p_initializeOnce;
- (void)loadAvatarResultModelByGender:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
