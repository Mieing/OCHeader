@class NSString;

@interface AWELiveToastFactoryImpl : NSObject <IESLiveToastFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)showDuxToast:(id)a0;
- (void)showHUD:(id)a0 duration:(double)a1;
- (void)showHUD:(id)a0 inView:(id)a1;
- (void)hideHUD;
- (void)showTopToast:(id)a0;
- (void)showTopToast:(id)a0 duration:(double)a1 discardable:(BOOL)a2 priority:(unsigned long long)a3 gradientFromColor:(id)a4 gradientToColor:(id)a5;
- (void)showTopAttributedToast:(id)a0 duration:(double)a1 discardable:(BOOL)a2 priority:(unsigned long long)a3 gradientFromColor:(id)a4 gradientToColor:(id)a5;
- (void)showTopCustomView:(id)a0 duration:(double)a1;
- (void)showSuccessHUD:(id)a0;
- (void)showErrorHUD:(id)a0;
- (void)showCenterToast:(id)a0 canDismissByClickMask:(BOOL)a1 canShowCloseIcon:(BOOL)a2 image:(id)a3 title:(id)a4 subTitle:(id)a5 mainTitle:(id)a6 assitTitle:(id)a7 mainBlock:(id /* block */)a8 assitBlock:(id /* block */)a9 closeBlock:(id /* block */)a10 completion:(id /* block */)a11;
- (id)loadingToastWithText:(id)a0;
- (void)showCenterToast:(id)a0 canDismissByClickMask:(BOOL)a1 image:(id)a2 title:(id)a3 subTitle:(id)a4 mainTitle:(id)a5 assitTitle:(id)a6 mainBlock:(id /* block */)a7 assitBlock:(id /* block */)a8 completion:(id /* block */)a9;
- (void)adapter_showToast:(id)a0;
- (void)adapter_showToast:(id)a0 inView:(id)a1 duration:(double)a2;
- (void)observeLiveToast:(id)a0;
- (void)adapter_showCustomView:(id)a0;
- (void)showHUD:(id)a0;

@end
