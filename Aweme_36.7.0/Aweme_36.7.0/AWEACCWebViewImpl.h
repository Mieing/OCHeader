@class NSString;

@interface AWEACCWebViewImpl : NSObject <ACCWebViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWebviewControllerWithUrl:(id)a0 title:(id)a1;
- (void)webVC:(id)a0 hideNavigationBar:(BOOL)a1;
- (id)JSBNotificationName;

@end
