@class WeToast, NSObject;

@interface MJShootToastManager : NSObject

@property (retain, nonatomic) WeToast *toastVC;
@property (weak, nonatomic) NSObject *aigcNotMetTips;

- (void)showMusicCaptionEmptyToast;
- (void)showMusicCaptionRequestFailedToast;
- (void)showMusicCaptionSendRequestToast;
- (void)hideToastIfNeeded;
- (void)showFeedBackgroundMusicHasUsedToast;
- (void)showToastWithText:(id)a0;
- (void)showShootTemplateNotMetAlertInView:(id)a0 templateItem:(id)a1 sceneType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
