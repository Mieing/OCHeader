@class WeToast;

@interface MJShootToastManager : NSObject

@property (retain, nonatomic) WeToast *toastVC;

- (void)showMusicCaptionEmptyToast;
- (void)showMusicCaptionRequestFailedToast;
- (void)showMusicCaptionSendRequestToast;
- (void)hideToastIfNeeded;
- (void)showFeedBackgroundMusicHasUsedToast;
- (void)showToastWithText:(id)a0;
- (void).cxx_destruct;

@end
