@class IESLiveOpenPlatformSonicViewController;

@interface IESLiveGameOpenPlatformSonicEmulator : IESLiveGameOpenPlatformEmulator

@property (retain, nonatomic) IESLiveOpenPlatformSonicViewController *sonicController;

- (void)reloadWithParams:(id)a0;
- (void)hideErrorView;
- (void)showErrorPage;
- (id)currentPresentedView;
- (void)showLoadingPage;
- (void)hideLoadingPage;
- (long long)totalShowTime;
- (void)oepnAuthListPageWithCompletion:(id /* block */)a0;
- (id)initWithAppId:(id)a0 gameModel:(id)a1 diContext:(id)a2;
- (void)reloadWithSonicConfig:(id)a0;
- (void)reloadInternalView;
- (void).cxx_destruct;
- (void)destroy;
- (void)hide;
- (BOOL)isShowing;
- (void)show;

@end
