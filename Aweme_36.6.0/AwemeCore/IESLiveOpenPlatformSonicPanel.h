@class IESLiveGameOpenPlatformPanelErrorView, NSString, IESLiveGameOpenPlatformPanelLoadingView, UIView, IESLiveOpenPlatformSonicPanelModel, BDLOCSonicInstance, IESLiveGameOpenPlatformPromptUtil, IESLiveGameOpenPlatformPanelToolView, IESLiveOpenPlatformSonicView;

@interface IESLiveOpenPlatformSonicPanel : UIView

@property (retain, nonatomic) IESLiveGameOpenPlatformPanelToolView *toolView;
@property (retain, nonatomic) IESLiveGameOpenPlatformPanelLoadingView *loadingView;
@property (retain, nonatomic) IESLiveGameOpenPlatformPanelErrorView *errorView;
@property (nonatomic) double perShowTime;
@property (nonatomic) double panelTotalShowTime;
@property (retain, nonatomic) UIView *panelMask;
@property (retain, nonatomic) IESLiveOpenPlatformSonicView *sonicView;
@property (retain, nonatomic) IESLiveGameOpenPlatformPromptUtil *promptUtil;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *developerInfo;
@property (readonly, nonatomic) IESLiveOpenPlatformSonicPanelModel *panelModel;
@property (readonly, nonatomic) long long totalShowTime;
@property (weak, nonatomic) BDLOCSonicInstance *sonicGameInstance;
@property (nonatomic) BOOL isShowing;

- (void)hideErrorView;
- (void)hideLoading;
- (void)setupCornerRadius:(double)a0;
- (void)reloadInternalView;
- (void)handlePanelDidShow;
- (void)updateToolViewTopOffset:(double)a0;
- (void)showPanelMask:(BOOL)a0;
- (void)_loadRevenueNoticeViewIfNeeded;
- (void)_loadNotificationViewIfNeeded;
- (void)_accumulatePanelShowingTime;
- (void)_setupTopLeftRightCorner:(double)a0;
- (void)loadInternalView;
- (void)_loadToolView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 panelModel:(id)a1 diContext:(id)a2;
- (void)relayoutPanelView;
- (void)showErrorWithRetryBlock:(id /* block */)a0;
- (void)handlePanelDidHide;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setup;
- (id)internalView;
- (void)showLoading;

@end
