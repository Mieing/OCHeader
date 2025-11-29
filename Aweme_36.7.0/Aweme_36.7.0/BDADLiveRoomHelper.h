@interface BDADLiveRoomHelper : NSObject

+ (void)transferToURLString:(id)a0;
+ (id)createLiveFloatOnTopManagerPlayOnViewController:(id)a0;
+ (void)preRenderWebViewWithURLString:(id)a0 title:(id)a1 model:(id)a2;
+ (void)removePreRenderIfNeededWithURLString:(id)a0;
+ (void)preloadMicroAppWithURLStrings:(id)a0;
+ (BOOL)isSaaS;
+ (void)preloadResourceWithModel:(id)a0;
+ (id)adLiveKitService;
+ (id)liveRoomPluginArray;
+ (void)fetchAdInfoWithURL:(id)a0 method:(id)a1 params:(id)a2 completionBlock:(id /* block */)a3;
+ (BOOL)setupCommerceComponentPreload:(id /* block */)a0;
+ (BOOL)tryOpenPageUsingOpenURL:(id)a0;
+ (BOOL)tryOpenPageUsingIronManURL:(id)a0 orientation:(long long)a1;
+ (id)getLiveRoomWebCardViewWithCardModel:(id)a0;
+ (id)getLiveRoomLynxCardViewWithCardModel:(id)a0;
+ (id)liveRoomModuleSettings;
+ (id)createWebLandingPageWithPageModel:(id)a0 routeParams:(id)a1;
+ (id)createLynxLandingPageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 methods:(id)a2;
+ (void)routeToIMPageWithOpenUid:(id)a0 nickname:(id)a1 enterFrom:(id)a2 alias:(id)a3 ext:(id)a4 completion:(id /* block */)a5;
+ (void)openBDARifleViewPopupWithURL:(id)a0 extraData:(id)a1;
+ (void)authDouyin:(id /* block */)a0;
+ (id)modelToLiveRoom;

@end
