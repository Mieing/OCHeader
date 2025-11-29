@class NSString, IESAVAssetReverse;
@protocol DVENLEInterfaceProtocol, DVECoreDraftServiceProtocol, DVECoreActionServiceProtocol, DVEComponentViewManagerProtocol, DVELoadingViewProtocol, DVECoreAudioProtocol, IESServiceProvider, DVEPlayerServiceProtocol, DVEEditingRuntimeProtocol;

@interface DVEVideoEditor : NSObject <DVECoreVideoProtocol>

@property (class, readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } kDefaultPhotoResourceDuration;

@property (retain, nonatomic) IESAVAssetReverse *reverseSession;
@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<DVELoadingViewProtocol> loadingView;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)muteMainTrackVolume:(BOOL)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (id)videoSplitForSlot:(id)a0 isMain:(BOOL)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeVideoRotate:(id)a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleVideoReverse:(id)a0 isMain:(BOOL)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteVideoClip:(id)a0 isMain:(BOOL)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeVideoSpeed:(double)a0 slot:(id)a1 isMain:(BOOL)a2 shouldKeepTone:(BOOL)a3 autoCommit:(BOOL)a4 completion:(id /* block */)a5;
- (void)changeVideoRotation:(id)a0 rotation:(id)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeVideoVolume:(double)a0 slot:(id)a1 isMain:(BOOL)a2 autoCommit:(BOOL)a3 completion:(id /* block */)a4;
- (void)moveMainVideoSlot:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2 autoCommit:(BOOL)a3 completion:(id /* block */)a4;
- (void)trimVideo:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)trimVideo:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)moveAttachSlot:(id)a0 insertSection:(long long)a1 targetStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 autoCommit:(BOOL)a3 completion:(id /* block */)a4;
- (void)moveAttachSlot:(id)a0 insertSection:(long long)a1 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 isNewInsert:(BOOL)a3 autoCommit:(BOOL)a4 completion:(id /* block */)a5;
- (void)p_updateRotationScale:(id)a0;
- (void)reverseAsset:(id)a0 processBlock:(id /* block */)a1 complete:(id /* block */)a2;
- (id)splitVideoSlot:(id)a0 splitTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_deleteSlotOnMainTrack:(id)a0;
- (void)changeSlot:(id)a0 volume:(double)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateVideo:(id)a0 speed:(double)a1 shouldKeepTone:(BOOL)a2 autoCommit:(BOOL)a3 completion:(id /* block */)a4;
- (void)reverseSlot:(id)a0 withAsset:(id)a1 forMainTrack:(BOOL)a2 isReallyReverse:(BOOL)a3 autoCommit:(BOOL)a4 completion:(id /* block */)a5;
- (void)updateVideo:(id)a0 curveSpeedPoint:(id)a1 autoCommit:(BOOL)a2 completion:(id /* block */)a3;
- (void)changeAudioVolumeForSlot:(id)a0 volume:(double)a1;
- (void)changeMainTrackSlot:(id)a0 volume:(double)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
