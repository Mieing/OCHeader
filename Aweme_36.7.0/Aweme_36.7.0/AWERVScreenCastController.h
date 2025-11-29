@class AWERVDetailPageContext, NSString, UIView;
@protocol BDByteScreenCastLivePlayerControlViewProtocol;

@interface AWERVScreenCastController : AWERVBaseController <AWEScreenCastControlViewInteractiveDelegate, AWERVScreenCastControllerProtocol>

@property (readonly, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *screenCastControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)awemeModel;
- (id)aAWEPadModuleAdapter;
- (id)paramDic;
- (void)closeButtonClicked:(id)a0;
- (void)refreshWithAwemeModel:(id)a0;
- (void)preSearch;
- (void)bindEvents;
- (void)updateScreenCastViewLayout:(id)a0;
- (id)videoPlayerContainerView;
- (void)updateScreenCastConfig:(BOOL)a0;
- (void)removeControlView:(id)a0;
- (void)showControlView:(id)a0;
- (void)updateControlViewFrame;
- (void)startConnectToDevice;
- (void)castPlayProgressInfoChanged:(id)a0;
- (void)castPlayStatusChanged:(unsigned long long)a0;
- (id)castExtraParams:(id)a0;
- (double)startScreenCastPlayTime;
- (void)backButtonDidClicked:(id)a0;
- (void)didRefreshWithUI;
- (void)willRefreshWithAwemeModel:(id)a0;
- (BOOL)shouldUseCustomRefreshPlayerTime;
- (void)enterFullScreenWithEnterMethod:(id)a0 createPageContext:(id)a1 holder:(id)a2;
- (void)afterQuitFromLandscapeFeed;
- (void)updateVideoPlayerFrameWhenScrolling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIsScreenCast:(BOOL)a0;
- (void)handleClickTVButton;
- (void)hideScreenCastControlView:(BOOL)a0;
- (void).cxx_destruct;
- (id)moreButton;
- (id)contentContainerView;
- (id)backButton;
- (void)viewDidLoad;
- (id)searchButton;
- (void)viewDidDisappear;
- (unsigned long long)currentResolution;

@end
