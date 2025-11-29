@class UIViewController;
@protocol AWEAwemePlayVideoProtocol, AWENativeVideoElementDelegate, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoTrackProtocol, AWEAwemePlayVideoControllerProtocol;

@interface AWENativeVideoElement : NSObject

@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoControllerProtocol, AWEAwemePlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playVideoViewController;
@property (weak, nonatomic) id<AWENativeVideoElementDelegate> delegate;

- (void)takeBackElement;
- (BOOL)isCanTakeBack;
- (void)bindDelegate:(id)a0;
- (void).cxx_destruct;

@end
