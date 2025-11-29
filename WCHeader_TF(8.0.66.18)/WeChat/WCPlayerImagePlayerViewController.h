@class WCPlayerView;
@protocol WCPlayerImagePlayerViewControllerDelegate;

@interface WCPlayerImagePlayerViewController : NSObject <WCPlayerControlProtocol>

@property (weak, nonatomic) id<WCPlayerImagePlayerViewControllerDelegate> delegate;
@property (weak, nonatomic) WCPlayerView *playerView;

- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)a0;
- (void).cxx_destruct;

@end
