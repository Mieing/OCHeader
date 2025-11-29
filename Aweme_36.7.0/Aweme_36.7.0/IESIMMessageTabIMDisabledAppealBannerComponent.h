@class NSString;

@interface IESIMMessageTabIMDisabledAppealBannerComponent : AWEIMMessageTabCommonBannerComponent <IESIMAppealChangeNotifyProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (Class)interactorClass;
- (void)imDisableAppealInfoDidChange:(id)a0;
- (void)showBannerIfNeed;
- (void)p_showOrHideTipsWithAppealModel:(id)a0;
- (void)createBannerInteractorWithAppealModel:(id)a0;
- (void)p_dismissBannerViewIfNeed;
- (void)p_markUserTapClose;

@end
