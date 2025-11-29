@class IESLiveAudiencePauseTipView, HTSLiveGradientBackgroundView, HTSLiveInteractiveAPIV2, IESLiveMediaMultiLinkerLoadingView, UILabel, UIView, NSString;
@protocol IESLiveMediaMultiLinkerProvider, HTSLiveDiggAction;

@interface IESLiveMediaMultiLinkerOwnerView : UIView <IESLiveMediaMultiLinkerGridViewProtocol>

@property (retain, nonatomic) UILabel *ownerLabel;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) IESLiveAudiencePauseTipView *tipView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *tipBackgroundView;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *ownerMaskView;
@property (weak, nonatomic) id<IESLiveMediaMultiLinkerProvider> provider;
@property (nonatomic) long long layoutType;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (retain, nonatomic) id<HTSLiveDiggAction> diggAction;
@property (nonatomic) double lastTapTime;
@property (nonatomic) BOOL continueDigg;
@property (weak, nonatomic) UIView *tipViewSuperview;
@property (nonatomic) BOOL didUpdate;
@property (retain, nonatomic) IESLiveMediaMultiLinkerLoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateActive:(BOOL)a0;
- (void)addTapGrsture;
- (void)onClearScreenMode:(id)a0;
- (id)p_makeGradientViewFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 fromColor:(id)a2 toColor:(id)a3;
- (void)onReceivedClearNotification:(BOOL)a0;
- (void)updateLayoutWithType:(unsigned long long)a0;
- (void)p_showOrHideTipView:(BOOL)a0;
- (void)updateOwnerTipBackgroungViewIfNeeed;
- (id)initWithDIContext:(id)a0 isAnchor:(BOOL)a1;
- (void)onOwnerViewClicked:(id)a0;
- (void)requestUpdateLayoutWithAction:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;
- (void)updateUser:(id)a0;

@end
