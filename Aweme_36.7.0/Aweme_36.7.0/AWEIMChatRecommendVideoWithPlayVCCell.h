@class UIViewController;
@protocol AWEPlayVideoViewControllerProtocol;

@interface AWEIMChatRecommendVideoWithPlayVCCell : AWEIMChatRecommendVideoCollectionViewCell

@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playViewController;

- (void)setAwemeModel:(id)a0;
- (id)uiConfig;
- (double)currentPlayBackTime;
- (void)p_setupLayout;
- (id)awemePlayViewController;
- (void)reconfigurePlayViewControllerIfNeeded;
- (void)p_setupPlayVideoViewController;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (void)dealloc;
- (void)playVideo;
- (void)pauseVideo;

@end
