@class NSString, UIViewController, AWEAwemePlayVideoPauseIcon;
@protocol AWESearchFeedArticleViewControllerProtocol;

@interface AWEFeedGeneralArticleCellViewController : AWEFeedGeneralCellViewController <AWESearchFeedArticleViewControllerDelegate, AWESearchArticleContainerMusicDelegate, AWEFeedGeneralArticleCellViewControllerProtocol>

@property (retain, nonatomic) AWEAwemePlayVideoPauseIcon *pauseIcon;
@property (retain, nonatomic) UIViewController<AWESearchFeedArticleViewControllerProtocol> *articleViewController;
@property (nonatomic) BOOL panelShowInPause;
@property (nonatomic) BOOL shouldIgnoreMusicCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPauseIcon;
- (void)hidePauseIcon;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)afterDidEndDisplaying;
- (void)setMusicStatus:(BOOL)a0;
- (void)updatePlaybackStatus:(long long)a0;
- (void)videoPlayerSingleClick;
- (void)trackShowBtn;
- (void)pushTransitionWillBegin;
- (void)pushTransitionDidComplete;
- (void)doPushAnimation;
- (id)pushTransitionParams;
- (void)popTransitionWillBegin;
- (void)popTransitionDidComplete;
- (void)doPopAnimation;
- (void)receivePopTransitionParams:(id)a0;
- (void)updateArticleContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 forModel:(id)a1;
- (void)trackEnterArticleDetail;
- (long long)getVideoPlayState;
- (BOOL)shouldSyncMusicState;
- (void)didBackFromArticleDetail;
- (void)didEnterArticleDetail;
- (void)articleViewControllerDidFailedRenderWithError:(id)a0;
- (void)articleViewControllerDidScrollToBottom:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)transitionContext;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
