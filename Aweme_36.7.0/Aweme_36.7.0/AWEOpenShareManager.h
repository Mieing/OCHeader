@class DUXLoadingToast;
@protocol AWEOpenShareDelegate;

@interface AWEOpenShareManager : NSObject

@property (retain, nonatomic) DUXLoadingToast *loadingView;
@property (retain, nonatomic) id<AWEOpenShareDelegate> delegate;

- (void)hideLoadingViewAnimated:(BOOL)a0;
- (void)authorizeWithConsumerOAuthReq:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)handleAwemeShareWithDict:(id)a0;
- (void)handleAwemeShareFromSystemExtension:(id)a0;
- (void)reportCardMonitorWith:(id)a0 resp:(id)a1;
- (void)jumpToContactWithOpenId:(id)a0 targetOpenId:(id)a1 clientKey:(id)a2 completionResp:(id)a3 completion:(id /* block */)a4;
- (void)jumpToAlbumWithResp:(id)a0 completion:(id /* block */)a1;
- (void)jumpToProfileWithOpenId:(id)a0 targetOpenId:(id)a1 clientKey:(id)a2 extraParams:(id)a3 completionResp:(id)a4 completion:(id /* block */)a5;
- (BOOL)checkDouyinVersionValidToMiniVersion:(id)a0;
- (BOOL)shouldCheckScope:(id)a0;
- (id)generateCheckScopesArrayWithOauthReq:(id)a0;
- (void)handleCheckPermissionResultToResp:(id)a0 ToDict:(id)a1 withCheckResult:(id)a2;
- (BOOL)useNewIMProcess:(id)a0 method:(id)a1;
- (void)addShareMonitor:(BOOL)a0 resp:(id)a1;
- (void)updateMediaResourcesAndTypeWithResp:(id)a0 locations:(id)a1 completion:(id /* block */)a2;
- (void)updateOpenPlatformShareToTypeWithResp:(id)a0 isAwemeSource:(BOOL)a1 isShareToStory:(BOOL)a2;
- (void)didEnterAwemeFromThridAppShareWithThridAppKey:(id)a0 shareParam:(id)a1;
- (void)addCardMonitor:(id)a0 resp:(id)a1;
- (BOOL)supportAnchorType:(long long)a0;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
