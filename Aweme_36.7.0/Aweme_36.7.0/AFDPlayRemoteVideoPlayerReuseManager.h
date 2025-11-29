@class UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol;

@interface AFDPlayRemoteVideoPlayerReuseManager : NSObject

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *tempHoldPlayer;

+ (id)shareInstance;

- (void)enqueuePlayer:(id)a0;
- (id)dequeuePlayerWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
