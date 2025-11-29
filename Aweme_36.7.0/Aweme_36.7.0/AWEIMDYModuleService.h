@class NSDictionary;

@interface AWEIMDYModuleService : AWEIMModuleService

@property (copy) NSDictionary *startIMInfo;

+ (id)sharedIntance;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogin;
- (BOOL)isNoticePushViewShowing;
- (void)startIM;
- (void)recordStartIMInfo:(id)a0;
- (id)fetchStartIMInfo;
- (double)noticePushViewShowDuration;
- (id)getNavigationBarUnreadView;
- (id)getIMNavigationBarUnreadViewWithSceneType:(long long)a0;
- (void)shareVideoAfterPublish:(id)a0 publishModel:(id)a1 enterFrom:(id)a2;
- (id)faceToFacePanelKeyboardData;
- (id)faceToFacePanelDefaultKeyboardData;
- (BOOL)shouldReportForAPI:(id)a0;
- (id)pushModel;
- (unsigned long long)landingStrategyWithUrlString:(id)a0;
- (id)faceToFaceViewConfig;
- (id)faceToFaceDefaultViewConfig;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (id)officialChatTitle;
- (void)p_showOnlinePrivacyPopupView:(id)a0 useCardUIStyle:(BOOL)a1;
- (void).cxx_destruct;

@end
