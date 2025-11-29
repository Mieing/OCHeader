@class NSString;

@interface IESGCPURLSchemaHandlerImpl : NSObject <IESGCPURLSchemaHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0 withDIIndex:(id)a1;
- (void)openURL:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)openURL:(id)a0 userInfo:(id)a1 disableRoute:(BOOL)a2 completion:(id /* block */)a3;
- (id)appendDIIndex:(id)a0 toUrl:(id)a1;
- (id)appendTrackerRouterInfoIfNeeded:(id)a0;
- (id)appendSourceBTMTokenIfNeeded:(id)a0;
- (id)enableFontScaleIfNeeded:(id)a0;
- (id)enableLargeScreenIfNeeded:(id)a0;
- (BOOL)isShortSchemaWithHost:(id)a0;
- (BOOL)canOpenURL:(id)a0;
- (void)openURL:(id)a0;

@end
