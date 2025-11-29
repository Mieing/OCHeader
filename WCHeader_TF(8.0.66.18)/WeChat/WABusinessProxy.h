@class NSString, NSMutableArray;

@interface WABusinessProxy : NSObject <PBMessageObserverDelegate, IWABusinessService>

@property (retain, nonatomic) NSMutableArray *uploadingInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)showUserGuide;
+ (void)onWeAppNavigateToMiniProgramFromAppId:(id)a0 toAppId:(id)a1 pagePath:(id)a2 fromScene:(unsigned long long)a3 fromSceneNote:(id)a4 adInfo:(id)a5;
+ (void)onWeAppNavigateToMiniProgramSuccessFromAppId:(id)a0 toAppId:(id)a1;
+ (void)onWeAppNavigateToMiniProgramFailFromAppId:(id)a0 toAppId:(id)a1;
+ (void)onWeAppNavigateToMiniProgramCancelledFromAppId:(id)a0 toAppId:(id)a1;
+ (void)onWeAppDidPresentWithPresentingViewController:(id)a0;
+ (id)genWebViewController:(id)a0;
+ (id)saveExposeSnapShot:(id)a0;
+ (void)clearExposeSnapShot:(id)a0;
+ (void)didUserSelectCopyMPShortLinkSuccess:(id)a0 inWebViewController:(id)a1 processCompletion:(id /* block */)a2;
+ (id)getMMHeadImageViewWithUsername:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)genProfileWithParameter:(id)a0;
+ (id)genAppAuthSettingWithWeAppContact:(id)a0;
+ (BOOL)isLogin;
+ (id)getLoginUsrInfo;
+ (void)onMPShortLinkGlobalHightLightSwitchDidChanged;
+ (void)updateAppServiceConfigRes;
+ (void)showUserGuideDialog:(id)a0;

@end
