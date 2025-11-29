@class NSString;

@interface AWEBDALiveSDKImplementer : NSObject <BDADLiveRoomProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)attachingDIContext;
- (void)transferToURLString:(id)a0;
- (void)preRenderWebViewWithURLString:(id)a0 title:(id)a1 model:(id)a2;
- (void)removePreRenderIfNeededWithURLString:(id)a0;
- (void)preloadMicroAppWithURLStrings:(id)a0;
- (void)preloadResourceWithModel:(id)a0;
- (id)originAdInfoWithWindmillModel:(id)a0;
- (id)adLiveKitService;
- (id)currentCardModel:(id)a0;
- (id)liveRoomPluginArray;
- (void)fetchAdInfoWithURL:(id)a0 method:(id)a1 params:(id)a2 completionBlock:(id /* block */)a3;
- (void)trackURLs:(id)a0 params:(id)a1;
- (id)modelToLiveRoom:(id)a0;
- (id)livePromptViewImpl;
- (void)setupCardWithModel:(id)a0 parentView:(id)a1 promptViewImpl:(id)a2;
- (BOOL)setupCommerceComponentPreload:(id /* block */)a0;
- (BOOL)tryOpenPageUsingOpenURL:(id)a0;
- (BOOL)tryOpenPageUsingIronManURL:(id)a0 orientation:(long long)a1;
- (id)liveRoomModuleSettings;
- (void)routeToWebLandPageWithPageModel:(id)a0 routeParams:(id)a1;
- (void)routeToLynxLandPageWithPageModel:(id)a0 fallbackBlock:(id /* block */)a1;
- (id)routeParamsWithWebURL:(id)a0 adInfo:(id)a1 queries:(id)a2;

@end
