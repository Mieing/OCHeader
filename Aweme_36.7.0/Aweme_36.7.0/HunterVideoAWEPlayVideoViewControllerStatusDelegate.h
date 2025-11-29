@class NSString, HunterVideoView;
@protocol HunterVideoViewDelegate, AWEPlayVideoViewControllerStatusDelegate;

@interface HunterVideoAWEPlayVideoViewControllerStatusDelegate : NSObject <AWEPlayVideoViewControllerStatusDelegate>

@property (weak, nonatomic) HunterVideoView *hunterVideoView;
@property (weak, nonatomic) id<HunterVideoViewDelegate> delegate;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerStatusDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoController:(id)a0 playerPlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:(id)a0;
- (void)videoUpdatePlayerControllerWithPlayState:(long long)a0;
- (void)videoUpdatePlayerControllerWithNewPlayState:(long long)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
