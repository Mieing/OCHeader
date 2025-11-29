@class UIViewController, AWEAwemeModel;
@protocol AWEAwemePlayVideoViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWEFeedPlayerPreloadManager : NSObject

@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *videoController;
@property (nonatomic) BOOL isFirstTimeAppDidBecomeActive;

+ (id)sharedInstance;

- (void)createFirstPlayerWithModel:(id)a0;
- (id)videoControllerWithModel:(id)a0;
- (void).cxx_destruct;
- (void)clean;

@end
