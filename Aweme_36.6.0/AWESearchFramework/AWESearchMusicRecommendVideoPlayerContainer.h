@class UIViewController;
@protocol AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol;

@interface AWESearchMusicRecommendVideoPlayerContainer : UIViewController

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *player;

- (void).cxx_destruct;
- (void)setupUI;

@end
