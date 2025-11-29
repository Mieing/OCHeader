@class NSString;

@interface AWELiveMainModuleServiceImpl : NSObject <IESLiveAWEMainModuleServie>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)personalRecommendSwitchParams;
- (BOOL)userHasAgreedPrivacyAlert;
- (void)openPushGuideWithScene:(id)a0;
- (void)donateUserOpenLiveAction:(id)a0;
- (void)donateUserWatchLiveAction:(BOOL)a0;

@end
