@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEECMallVideoPlayerTransitionDataSource, AWEAwemeDetailTableViewControllerProtocol;

@interface AWEECMallVideoPlayerTransitionService : NSObject <AWEECFeedListDelegate, AWEECMallVideoPlayerTransitionProtocol>

@property (weak, nonatomic) id<AWEECMallVideoPlayerTransitionDataSource> mallVideoPlayer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playerTransitionWithDataSource:(id)a0;

- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (void)updateWithVideoData:(id)a0;
- (id)configDataControllerWithRouterParams:(id)a0;
- (void)requestFirstAwemeCompleteWithAweme:(id)a0;
- (void)updateWithVideoData:(id)a0 coverImage:(id)a1;
- (void)enterDetailWithPlayer:(id)a0 routerParams:(id)a1;
- (void).cxx_destruct;

@end
