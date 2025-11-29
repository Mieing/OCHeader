@class NSString, AFDPureModeConfiguration, AWEAwemeModel, NSMutableArray;
@protocol AFDPureModeCustomizableProtocol;

@interface AFDPureModePageControllerManager : AWEShellControllerManager <AFDPureModePageControllerProtocol>

@property (retain, nonatomic) NSMutableArray *mbClassNameArray;
@property (weak, nonatomic) AFDPureModeConfiguration *configuration;
@property (weak, nonatomic) id<AFDPureModeCustomizableProtocol> customization;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL isMixWork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;
+ (Class)aAFDPureModePageViewControllerAdapterClass;
+ (Class)aAWEPlayInteractionDSAdapterClass;

- (void)player:(id)a0 didChangePlaybackRate:(double)a1;
- (void)player:(id)a0 onMaskInfoCallBack:(id)a1 pts:(unsigned long long)a2;
- (void)setHide:(BOOL)a0;
- (void)didChangeAlbumIndex:(long long)a0 animated:(BOOL)a1;
- (void)containerDidScroll:(id)a0;
- (void)containerWillBeginDragging:(id)a0;
- (void)containerDidEndDragging:(id)a0;
- (BOOL)canAutoPlayNextAweme:(long long)a0;
- (void)videoWillLoopTimes:(long long)a0;
- (void)containerDidUpdateVideoController:(id)a0;
- (void)containerDidPlayOrPause:(BOOL)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)player:(id)a0 subtitleInfoCallBack:(id)a1;
- (id)classNameArray;
- (void)didUpdatePlayerController:(id)a0;
- (void)didOuterPinchTransitionWillBegin;
- (void)didOuterPinchTransitionFinish;
- (void)didOuterPinchTransitionDidCancel;
- (void)willEnterScaleMode:(BOOL)a0;
- (void)showInScaleMode;
- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (id)aAFDPureModePageViewControllerAdapter;
- (BOOL)enableLongPressPanel;
- (BOOL)enableLongPressFastSpeed;
- (BOOL)enablePiP;
- (BOOL)enableShowPiPTopEntry;
- (BOOL)enableLandscape;
- (BOOL)enableAlbumFolio;
- (BOOL)enableAlbumScaleReset;
- (BOOL)enableChapterProgress;
- (BOOL)enableSubtitleController;
- (BOOL)enablePinchController;
- (BOOL)enableShowMoreButtonEntry;
- (id)aAWEPlayInteractionDSAdapter;
- (void)setupControllersWithConfiguration:(id)a0 customization:(id)a1 awemeModel:(id)a2;
- (void)becomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)addController:(id)a0;
- (void)setData:(id)a0;
- (BOOL)isInteracting;
- (void)viewWillLayoutSubviews;
- (void)didEndDisplaying;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
