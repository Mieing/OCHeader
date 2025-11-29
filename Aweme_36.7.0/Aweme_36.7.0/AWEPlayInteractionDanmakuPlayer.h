@class UIFont, NSString, AWEAwemeModel, AWEDanmakuEggAnimationView, AWEDanmakuDislikeHandler, DDanmakuBaseTrackLayer;
@protocol AWEDanmakuFlowTrackLayerProtocol, AWEPlayInteractionDanmakuPlayerDelegate;

@interface AWEPlayInteractionDanmakuPlayer : DDanmakuPlayer <AWEUserMessage, AWEPlayInteractionDanmakuPlayerProtocol>

@property (retain, nonatomic) AWEDanmakuEggAnimationView *eggAnimationView;
@property (copy, nonatomic) id /* block */ danmakuClickBlock;
@property (copy, nonatomic) id /* block */ danmakuDiggNumViewClickBlock;
@property (retain, nonatomic) DDanmakuBaseTrackLayer<AWEDanmakuFlowTrackLayerProtocol> *defaultDanmakuLayer;
@property (weak, nonatomic) id<AWEPlayInteractionDanmakuPlayerDelegate> playerDelegate;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UIFont *fontSizeInfo;
@property (nonatomic) double displayTime;
@property (nonatomic) double danmakuRate;
@property (nonatomic) double danmakuSpaceY;
@property (nonatomic) float displayArea;
@property (nonatomic) float danmaKuAlpha;
@property (nonatomic) double pathHeight;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long currentSceneType;
@property (retain, nonatomic) AWEDanmakuDislikeHandler *dislikeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)danmakuItemViewClass;

- (void)didFinishLoginWithUid:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)appendDanmakusToDataPool:(id)a0;
- (id)aAWEPlayInteractionAdapter;
- (void)setPlaySpeedFactor:(double)a0;
- (void)danmakuStop;
- (BOOL)isDanmakuViewShowing;
- (BOOL)shouldHandleDanmaKuTap:(id)a0;
- (void)updateDanmakuPlayerStatus:(BOOL)a0;
- (void)danmakuResume;
- (void)danmakuPause;
- (id)initWithTrackLayer:(id)a0;
- (void)stopAlphaPlayerIfNeed;
- (BOOL)isDanmakuDisPlaying:(id)a0;
- (BOOL)shouldShieldDanmaku:(id)a0;
- (void)showDanmakuEggOnView:(id)a0 danmakuEggMaterial:(id)a1;
- (BOOL)isDanmakuEggShowing;
- (void)pauseDisplayingDanmakuByID:(id)a0;
- (void)smartModeFilterEffect;
- (void)refreshDanmaKuConfigIfNeedWithPlayRate:(double)a0 isVideoPlaying:(BOOL)a1;
- (void)resumeDisplayingDanmakuByID:(id)a0;
- (id)danmakuView;
- (void)registerDefaultClass;
- (BOOL)shouldHandleDanmakuViewDirectIfNeed;
- (BOOL)shouldInterceptPlay;
- (void)removeEggAnimationView;
- (void)handleEggLottieShowOnView:(id)a0 danmakuEggMaterial:(id)a1;
- (void)handleEggAlphaShowOnView:(id)a0 danmakuEggMaterial:(id)a1;
- (id)currentDanmakuStyleInfo;
- (BOOL)trackNumberHasChange:(double)a0;
- (void)updateAllDisPlayingDanmakuUI;
- (void)handleGestureRecognizer:(id)a0 targetDanmaku:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)reset;
- (void)dealloc;

@end
