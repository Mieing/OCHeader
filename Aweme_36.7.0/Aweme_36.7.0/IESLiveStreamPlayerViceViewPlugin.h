@class NSString, IESLiveBackgroundView, UIView;

@interface IESLiveStreamPlayerViceViewPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerViceViewPluginProtocol>

@property (retain, nonatomic) UIView *viceView;
@property (copy, nonatomic) NSString *gameLiveDatats;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gameClip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraClip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customCameraClip;
@property (nonatomic) BOOL shouldHasViceView;
@property (nonatomic) long long viceLayoutType;
@property (retain, nonatomic) IESLiveBackgroundView *landscapeViceBgView;
@property (retain, nonatomic) UIView *viceViewContainer;
@property (nonatomic) BOOL latestCameraFirst;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viceViewFrame;
@property (nonatomic) double viceViewRightOffSet;
@property (nonatomic) double viceViewAspectRatio;
@property (nonatomic) long long cameraVerticalType;
@property (nonatomic) BOOL isViceHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)destroyVicePlayerView:(id)a0;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (id)viceViewWithCallTrace:(id)a0;
- (BOOL)isViceLayoutTypeGame;
- (BOOL)isCameraHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentViceViewFrame;
- (void)reloadCurrentViceStateWithCallTrace:(id)a0;
- (BOOL)isGameViceViewExist;
- (void)clearViceView;
- (void)initViceViewForGame;
- (void)vicePlayerViewCreateWithRenderingArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viceViewContainer:(id)a1 maskView:(id)a2;
- (void)vicePlayerViewSetWith:(id)a0 viceViewContainer:(id)a1 maskView:(id)a2;
- (void)vicePlayerViewSetAlpha:(double)a0;
- (BOOL)isViceViewRoomOrientationNeedReload;
- (BOOL)isOrientationNeedReload;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutCustomViceViewInGameRoom:(id)a0 layoutDataData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a1;
- (void)updateViceViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 callTrace:(id)a1;
- (void)updateShouldHasViceView;
- (BOOL)p_shouldUseNewCameraLogic;
- (void)clearLandscapeViceViewImageView;
- (BOOL)changeGameAndCameraPostionWith:(id)a0 needChange:(BOOL)a1;
- (BOOL)p_isExplainRoom;
- (void)updateViceViewRelatedAttributes:(id)a0;
- (BOOL)p_checkIfNeedInitViceView;
- (void)initViceView;
- (void)updateViceViewImageViewHiddenStatus;
- (void)handleViceViewMeta:(id)a0;
- (void)changeToCameraCrop;
- (void)pe_bizHostDidInit;
- (void)pe_prepareForReuse;
- (void)pe_willReloadWithStreamData:(id)a0 sdkKey:(id)a1 callTrace:(id)a2;
- (void)pe_didReloadWithStreamData:(id)a0 sdkKey:(id)a1 callTrace:(id)a2;
- (void)pe_playWithCallTrace:(id)a0;
- (void)pe_stopWithCallTrace:(id)a0;
- (void)pe_hideWithCallTrace:(id)a0;
- (void)pe_playerViewDidHidden:(BOOL)a0 callTrace:(id)a1;
- (void)setupViceView;
- (void)addViceView;
- (BOOL)changeGameAndCameraPostionIfNeeded;
- (void)changeToCameraCropIfNeeded;
- (void)removeViceView;
- (void).cxx_destruct;

@end
