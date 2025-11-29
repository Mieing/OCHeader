@class NSString, UIViewController;
@protocol AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol, AWEAwemePlayVideoViewControllerProtocol, IESVideoPlayerProtocol;

@interface AWERelatedVideoPlayModel : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double currentPlaybackTime;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerProtocol> *insertPlayVideoViewController;

- (void).cxx_destruct;

@end
