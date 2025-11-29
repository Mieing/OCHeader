@protocol AWEPlayVideoViewControllerDelegate;

@interface AWEVideoControllerPlaybackRateData : NSObject

@property (retain, nonatomic) id<AWEPlayVideoViewControllerDelegate> videoViewController;
@property (nonatomic) double playbackRate;

- (void).cxx_destruct;

@end
