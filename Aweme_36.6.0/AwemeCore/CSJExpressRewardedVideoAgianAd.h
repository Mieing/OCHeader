@class CSJNativeExpressRewardedVideoAd, UIViewController, NSString;

@interface CSJExpressRewardedVideoAgianAd : NSObject <CSJNativeExpressRewardedVideoAdDelegate, CSJRewardedVideoAgianDelegate>

@property (weak, nonatomic) CSJNativeExpressRewardedVideoAd *originRewardAd;
@property (retain, nonatomic) CSJNativeExpressRewardedVideoAd *expressRewardAd;
@property (weak, nonatomic) UIViewController *originRewardRootVC;
@property (copy, nonatomic) id /* block */ success;
@property (copy, nonatomic) id /* block */ fail;
@property (nonatomic) BOOL playFinishDidCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *originRootVC;

- (void)nativeExpressRewardedVideoAdDidLoad:(id)a0;
- (void)nativeExpressRewardedVideoAd:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressRewardedVideoAdCallback:(id)a0 withType:(unsigned long long)a1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)a0;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(id)a0;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)a0;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)a0;
- (void)nativeExpressRewardedVideoAdWillClose:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClose:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClick:(id)a0;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)a0;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)a0 didFailWithError:(id)a1;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)a0 verify:(BOOL)a1;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)a0 error:(id)a1;
- (void)nativeExpressRewardedVideoAdDidCloseOtherController:(id)a0 interactionType:(long long)a1;
- (id)initWithRewardedVideoAd:(id)a0;
- (BOOL)showAdFromRootViewController:(id)a0;
- (void)loadRewardAgianWithSuccess:(id /* block */)a0 fail:(id /* block */)a1;
- (void).cxx_destruct;

@end
