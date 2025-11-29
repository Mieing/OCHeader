@class NSString, UIView;
@protocol AWEIMQuickReplyControllerHandlerPortocol, AWEShareDetailWithQRCodeScreenShootContentViewProtocol;

@interface AWEShareAwemeBaseService : AWEShareCommonImpl <AWEShareAweme>

@property (retain, nonatomic) UIView<AWEShareDetailWithQRCodeScreenShootContentViewProtocol> *screenShootView;
@property (nonatomic) BOOL useWarmColorBg;
@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> imQuickReplyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEShareServiceDOUYINJXAdapterClass;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;

- (id)aAWEPadModuleAdapter;
- (id)contextWithAweme:(id)a0;
- (id)showPanelWithAweme:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2 shareButton:(id)a3;
- (id)showPanelWithAweme:(id)a0 configurationHandler:(id /* block */)a1 onViewController:(id)a2 shareButton:(id)a3 dismissBlock:(id /* block */)a4;
- (id)showPanelWithAweme:(id)a0 configurationHandler:(id /* block */)a1 fromViewController:(id)a2 onViewController:(id)a3 shareButton:(id)a4 dismissBlock:(id /* block */)a5;
- (void)fetchFeedShareGuideLabelAndIconWithAweme:(id)a0 lastType:(id)a1 completion:(id /* block */)a2;
- (void)showQRCodePanelWithAwemeModel:(id)a0 activityScene:(id)a1 customDescription:(id)a2;
- (void)presentShareSaveAlbumVCWithContext:(id)a0 shareCompletion:(id /* block */)a1;
- (void)handleShortUrlWithString:(id)a0;
- (id)extractToken:(id)a0;
- (BOOL)canDownloadWithAweme:(id)a0 withExtraLogParams:(id)a1;
- (void)downloadWithAweme:(id)a0 withExtraLogParams:(id)a1;
- (void)showSearchXiGuaPanelWithAweme:(id)a0 extraLogInfo:(id)a1 onViewController:(id)a2 shareButton:(id)a3;
- (void)showSharePanelWithContext:(id)a0 WithPlatform:(long long)a1 WithAweme:(id)a2;
- (void)showShareWeiXinPanelWithContext:(id)a0 WithAweme:(id)a1;
- (id)shareItemsWithAweme:(id)a0 configurationHandler:(id /* block */)a1 withShareItemType:(long long)a2;
- (void)shareActionWithType:(id)a0 withAweme:(id)a1 enterMethod:(id)a2;
- (id)shareRowViewWithItems:(id)a0 hostView:(id)a1;
- (id)bubbleSharePanelControllerWithTask:(id)a0 shareButton:(id)a1 presenterVC:(id)a2;
- (double)shareRowViewHeight;
- (void)showCloseFriendMomentQRCodePanelWithAwemeModel:(id)a0 enterMethod:(id)a1;
- (id)shareOutsideImageWithPlatform:(long long)a0;
- (BOOL)enableQrcodeWithAwemeModel:(id)a0;
- (void)saveImageToAlbum:(id)a0 completion:(id /* block */)a1;
- (id)generateSceenShootWithqrCodeImage:(id)a0 shootImage:(id)a1;
- (void)generateImageForAlbumWithAwemeModel:(id)a0 shootImage:(id)a1 completion:(id /* block */)a2;
- (void)openAppWithPlatform:(long long)a0 delay:(double)a1;
- (void)showVirtualAvatarQRCodePanelWithUserModel:(id)a0 virtualBodyPath:(id)a1 enterFrom:(id)a2 previousPage:(id)a3;
- (void)showVirtualAvatarQRCodePanelWithUserModel:(id)a0 virtualBodyImage:(id)a1 enterFrom:(id)a2 previousPage:(id)a3;
- (BOOL)screenshotShowUser;
- (id)aAWEPadBizUIAdapter;
- (id)aAWEShareServiceDOUYINJXAdapter;
- (id)configurationWithAweme:(id)a0;
- (void)addHandlerWithTask:(id)a0 aweme:(id)a1;
- (void)addCustomHandlerWithPanelConfiguration:(id)a0;
- (BOOL)shouldPresentLandscapePanelWithContext:(id)a0 onViewController:(id)a1;
- (void)configShareRiskWarningWithAwemeModel:(id)a0 sharePanel:(id)a1;
- (void)configMomentContext:(id)a0 aweme:(id)a1;
- (void)requestSoloKTVBulletMsg:(id)a0 completion:(id /* block */)a1;
- (void)requestRedPacketBulletMsg:(id)a0 completion:(id /* block */)a1;
- (id)constructQRCodeScreenShootContentView;
- (void)showVirtualAvatarQRCodePanelWithUserModel:(id)a0 andVirtualBodyPath:(id)a1 orVirtualBodyImage:(id)a2 enterFrom:(id)a3 previousPage:(id)a4;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void).cxx_destruct;

@end
