@class UIView, NSString, BDARVPlayerManager, BDARVADModel, UIImageView, BDARVSourceModel, UIButton, BDARFirstFrameTime, NSDictionary, UILabel, UIActivityIndicatorView;

@interface BDARVNativeAlert : BDARVAlert <BDARVPlayerDelegate>

@property (retain, nonatomic) BDARVPlayerManager *playerManager;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UILabel *adLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) UIButton *touchControl;
@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) BDARFirstFrameTime *firstFrameTime;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) UIButton *muteButton;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIImageView *replayImageView;
@property (nonatomic) unsigned long long loadState;
@property (copy, nonatomic) NSDictionary *playerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainWindow;

- (void)resumeVideo;
- (void)pureMonitorWithEvent:(id)a0 param:(id)a1;
- (id)adUnitID;
- (void)sendShowEvent;
- (void)player:(id)a0 didFinishedWithType:(unsigned long long)a1 error:(id)a2;
- (void)playerReadyToDisPlay:(id)a0;
- (void)player:(id)a0 hitCacheSize:(long long)a1;
- (void)player:(id)a0 playbackType:(unsigned long long)a1;
- (id)initWithSource:(id)a0 adModels:(id)a1;
- (void)sendBannerEventWithLabel:(id)a0 refer:(id)a1;
- (void)tapAction:(id)a0 forEvent:(id)a1;
- (void)resizeLayout;
- (void)closeAlert;
- (void)reloadVideo;
- (void)actionBtnClick;
- (void)muteBtnClick;
- (void)sendClickEventWithRefer:(id)a0;
- (void)showAnimation;
- (void).cxx_destruct;
- (void)closeAction;
- (double)titleHeight;
- (void)loadImage;
- (id)player;
- (void)showInView:(id)a0;
- (void)loadContent;
- (void)pauseVideo;
- (void)stopVideo;
- (double)centerWidth;
- (double)centerHeight;
- (void)updateUI:(id)a0;
- (id)creatorId;

@end
