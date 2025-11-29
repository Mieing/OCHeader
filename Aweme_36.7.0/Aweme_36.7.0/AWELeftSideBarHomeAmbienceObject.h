@class NSString;

@interface AWELeftSideBarHomeAmbienceObject : AWELeftSideBarAmbienceObject <AWEFeedThemeManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (void)hpLeftSideBarShowPopViewWithTask:(id)a0;
- (void)hpLeftSideBarShowCaptionBubbleWithModel:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2 clickContentBlock:(id /* block */)a3 clickCloseButtonBlock:(id /* block */)a4 autoDismissBlock:(id /* block */)a5;
- (void)hpLeftSideBarHideCaptionBubbleWithAnimated:(BOOL)a0 withReason:(long long)a1 completion:(id /* block */)a2;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (id)initWithAmbienceManager:(id)a0 withEntranceViewModel:(id)a1 withHostParams:(id)a2;
- (BOOL)canShowAmbienceEntranceBadge;
- (BOOL)canShowAmbienceEntranceLottie;
- (void)addLeftSideBarBussinessEntranceView:(id)a0 completion:(id /* block */)a1;
- (void)removeLeftSideBarBussinessEntranceViewWithCompletion:(id /* block */)a0;
- (BOOL)canShowAmbienceEntrancePopView;
- (BOOL)canShowAmbienceEntranceCaption;
- (BOOL)canShowAmbienceEntranceInteractiveAnimation;
- (BOOL)canShowAmbienceEntranceAnimation;

@end
