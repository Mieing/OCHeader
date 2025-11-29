@class NSString, SightView, UIView, WCCanvasDynamicDataLoader, UIButton;

@interface WCCanvasSightComponent : WCCanvasComponent <SightViewDelegate, WCCanvasImageLoaderObserver, WCSightLoaderObserver, VoiceComponentExt, WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) SightView *sightView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIButton *voiceIconButton;
@property (nonatomic) BOOL sightReady;
@property (nonatomic) BOOL sightPlaying;
@property (retain, nonatomic) NSString *currentSightUrl;
@property (nonatomic) struct CGSize { double width; double height; } sightSize;
@property (retain, nonatomic) UIButton *jumpStreamVideoBtn;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL bSlientPlay;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clear;
- (void)setup;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillStopState:(BOOL)a0;
- (void)componentWillResumeState:(BOOL)a0;
- (BOOL)tryToLoadThumbImage;
- (BOOL)tryToLoadSight;
- (void)tryToPlaySight;
- (void)trytoPauseSight;
- (void)tryToSetVideoPlayingState:(BOOL)a0;
- (void)onVoiceIconBtnClick:(id)a0;
- (unsigned long long)getSightViewScene;
- (void)tryToPauseWithShowThumb:(BOOL)a0;
- (void)onClickIconViewOfSightView:(id)a0;
- (BOOL)sightView:(id)a0 playbackDidReadEnd:(BOOL)a1;
- (void)onSightDurationUpdate:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)shouldVideoLayerRasterize;
- (BOOL)shouldCheckPlayerHasInitWhenSetThumbImageContentMode;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)SightWillBeginLoadForUrl:(id)a0;
- (void)SightDidReceiveProgress:(double)a0 Url:(id)a1;
- (void)SightDidLoad:(id)a0 Url:(id)a1;
- (void)SightDidFailForUrl:(id)a0;
- (void)onVoiceComponentHasPlayWithSound:(id)a0;
- (void)onUxCanvasDynamicXMLReturn:(id)a0 error:(int)a1 forCanvasId:(id)a2;
- (void)onClickStreamVideoBtn:(id)a0;
- (void)onClickSight:(id)a0;
- (BOOL)hasFloatComponentInfo;
- (void)startWaitForTriggerTime;
- (void)onNotifyToShowFloatComponent;
- (void)cancelFloatComponentTrigger;
- (void)checkAndStartFloatTimer;
- (void)resetSightViewAudioState:(BOOL)a0;
- (void).cxx_destruct;

@end
