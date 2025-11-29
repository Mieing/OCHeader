@class NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface LiteAppStoreExtKeyCallLiteAppConnectEventAdapter : MMObject <MMLiteAppStoreExt>

@property (retain, nonatomic) id<WXCustomWebViewControllerProtocol> webviewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)registerDelegate;
- (void)unRegisterDelegate;
- (void)onStoreSendResult:(id)a0 callbackId:(int)a1 resultType:(id)a2 result:(id)a3;
- (void)onStoreSetData:(id)a0 changes:(id)a1;
- (void).cxx_destruct;

@end
