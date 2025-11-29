@class NSString, IESLiveAnchorAudienceInteractiveGameModel;

@interface IESLiveGameOpenPlatformEmulator : NSObject <IESLiveGameOpenPlatformEmulator>

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (copy, nonatomic) NSString *resourceIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideErrorView;
- (void)showErrorPage;
- (id)currentPresentedView;
- (void)showLoadingPage;
- (void)hideLoadingPage;
- (long long)totalShowTime;
- (id)initWithAppId:(id)a0 gameModel:(id)a1 diContext:(id)a2;
- (void)reloadWithPath:(id)a0;
- (void).cxx_destruct;
- (void)destroy;
- (void)hide;
- (BOOL)isShowing;
- (void)show;

@end
