@class BDSCVideoPlayerBottomView, BDSCLoadingView, UIView, UIButton;

@interface BDSCUniformVideoPlayerControlView : BDSCBaseVideoPlayerControlView

@property (retain, nonatomic) BDSCLoadingView *refreshButton;
@property (retain, nonatomic) UIButton *reconnectButton;
@property (retain, nonatomic) UIView *reconnectButtonBgView;
@property (retain, nonatomic) BDSCVideoPlayerBottomView *bottomView;

- (void)updatePlayControlMediaInfo:(id)a0;
- (unsigned long long)additionActionOptions;
- (unsigned long long)exposedAdditionActionOptions;
- (id)additionActionValueForType:(unsigned long long)a0;
- (void)updateAdditionActionOptions;
- (void)updateCastCloseTitle:(id)a0;
- (void)updateCastDanmakuShow:(BOOL)a0;
- (void)updateCastDanmakuAuth:(BOOL)a0 enable:(BOOL)a1 animation:(BOOL)a2;
- (void)refreshUISettings;
- (void)updateStatusView;
- (void)changeToFail;
- (void)changeToConnecting;
- (void)updateFinishTitle;
- (void)changeToSuccess;
- (id)createTopView;
- (id)createVideoActionView;
- (void)configBackgroundImageViewWithSuccess:(BOOL)a0;
- (void)refreshActionUI;
- (void)updateVideoActionLayout;
- (void)changeToCastPreempted;
- (void)updateReconnectViewsHidden:(BOOL)a0;
- (void)onRefreshButtonDidTapped:(id)a0;
- (void)onReconnectButtonDidTapped:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)rebuildConstraints;
- (void)updateSubviews;

@end
