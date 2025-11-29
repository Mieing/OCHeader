@interface MMUIRouteRegistry : NSObject

+ (void)initWCPayRoutes;
+ (void)initSettingPageRoutes;
+ (id)makeUIRoute:(id)a0 handler:(id /* block */)a1 isAddPagePrefix:(BOOL)a2;
+ (id)makeUIRoute:(id)a0 handler:(id /* block */)a1;
+ (id)makeUIRoute:(id)a0 withVCClass:(Class)a1;
+ (id)makeUIRouteWithDeepLink:(id)a0;
+ (void)openWebview:(id)a0 withCurViewController:(id)a1;
+ (void)openWebview:(id)a0 withCurViewController:(id)a1 webviewHandler:(id /* block */)a2;
+ (void)openMessageView:(id)a0 curViewController:(id)a1;
+ (id)getFindFriendEntryViewController;
+ (void)moveToFindFriendTab;
+ (void)initMeTabRoutes;
+ (void)initFinderRoutes;
+ (void)initDeepLinkRoutes;
+ (void)initContactRoutes;
+ (void)openChatBotMessaveViewWithContact:(id)a0 curViewController:(id)a1;
+ (void)openPlugin:(long long)a0 onCurViewController:(id)a1 withRouterParameters:(id)a2;
+ (void)initAllUIRoutes;
+ (void)tryInitAllUIRoutes;
+ (BOOL)routeURL:(id)a0;
+ (BOOL)routeURL:(id)a0 curViewController:(id)a1;
+ (BOOL)routeURL:(id)a0 curViewController:(id)a1 withParameters:(id)a2;
+ (BOOL)canRoute:(id)a0;

@end
