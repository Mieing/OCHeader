@class UILabel, IESLiveStreamPlayerLayoutGameContentMonitor, UIView;

@interface IESLiveStreamPlayerLayoutPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerLayoutPluginProtocol>

@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL frameLocked;
@property (copy, nonatomic) id /* block */ frameChangedBlock;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutMediaSize;
@property (retain, nonatomic) UILabel *debugLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentViewFrame;
@property (retain, nonatomic) IESLiveStreamPlayerLayoutGameContentMonitor *gameContentMonitor;
@property (retain, nonatomic) UIView *lastLayoutPlayerSuperView;

+ (BOOL)shouldActivatePlugin;

- (void)didSetAttachingDIContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoAreaFrame;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (id)previewViewWithCallTrace:(id)a0;
- (void)addLayoutAttribute:(id)a0 value:(id)a1;
- (void)removeLayoutAttribute:(id)a0;
- (void)lockFrameWithCallTrace:(id)a0;
- (void)unlockFrameWithCallTrace:(id)a0;
- (void)resetFrameWithCallTrace:(id)a0;
- (void)resetAttachViewWithCallTrace:(id)a0;
- (void)layoutPlayerIfNeededWithCallTrace:(id)a0;
- (void)layoutWithType:(unsigned long long)a0 callTrace:(id)a1;
- (struct CGPoint { double x0; double x1; })playerOffsetWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1 callTrace:(id)a2;
- (void)setPlayerViewHidden:(BOOL)a0 callTrace:(id)a1;
- (void)removePreEnterViewWithLayout:(unsigned long long)a0 callTrace:(id)a1;
- (struct __CVBuffer { } *)cropCopyPixelBuffer:(float)a0 topLeftY:(float)a1 cropW:(float)a2 cropH:(float)a3 callTrace:(id)a4;
- (void)scalePlayerWithBottomOffset:(double)a0 callTrace:(id)a1;
- (void)scalePlayerByRightPanelResetFrame:(BOOL)a0 callTrace:(id)a1;
- (unsigned long long)streamLayoutType;
- (id)streamLayoutClassName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerFrameWithLayoutType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playViewFrameWithLayoutType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamFrameInView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vsLandscapePlayerFrame;
- (double)bottomOffsetForPlayerCalculate;
- (double)bottomOffsetForPlayerInTemplateRoom;
- (BOOL)isVerticalStream;
- (void)renderOnView:(id)a0 callTrace:(id)a1;
- (void)layoutWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0 layoutType:(unsigned long long)a1;
- (void)splitScreenBreakPointUpdate;
- (void)changePlayerContentFrameWithCallTrace:(id)a0;
- (void)p_monitorLayoutUpdate:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0 layoutType:(unsigned long long)a1;
- (void)p_layoutWithData:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0 layoutType:(unsigned long long)a1;
- (void)setPlayerViewAlpha:(double)a0 animate:(BOOL)a1 duration:(double)a2 callTrace:(id)a3;
- (BOOL)isPlayerNeedLayout:(id)a0;
- (void)renderOnView:(id)a0 callTrace:(id)a1 forceLayout:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playViewFrameWithLayoutType:(unsigned long long)a0 mediaSize:(struct CGSize { double x0; double x1; })a1;
- (double)p_bottomOffsetForPlayerCalculate:(BOOL)a0;
- (void)pe_bizHostDidInit;
- (void)pe_viewWillAppear;
- (void)pe_viewWillDisappear;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void)pe_orientationTransitionEnd:(long long)a0;
- (void)p_monitorGameContentLayoutUpdate:(struct { long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; id x3; BOOL x4; })a0 layoutType:(unsigned long long)a1;
- (void)showDebugInfoIfNeeded;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (void)resetView;
- (void)resetView:(id)a0;

@end
