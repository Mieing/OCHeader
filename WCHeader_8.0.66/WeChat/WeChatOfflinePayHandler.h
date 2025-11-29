@class OpenApiParameter, WCShareAuthViewController, NSString;

@interface WeChatOfflinePayHandler : NSObject <IPreEnterWechatLogicExt, WCShareAuthViewControllerDelegate, WCPaySDKOpenOfflinePayControlLogicExt>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) WCShareAuthViewController *authVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startWeChatOfflinePay:(id)a0;
- (void)cancelWeChatOfflinePay;
- (void)onPreEnterWechatDone;
- (void)startOfflinePay;
- (void)startAuth;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (id)makeBizCustomLinkIfNeed;
- (void)onSDKOpenOfflinePayLogicDidStop;
- (void).cxx_destruct;

@end
