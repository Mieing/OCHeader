@class NSString;

@interface WAJSEventHandler_openAddress : WAJSEventHandler_BaseEvent <IWebviewAskAuthorizationLogicExt, IWCAddressControlLogic>

@property (nonatomic) BOOL isFromGift;
@property (nonatomic) BOOL isForbidDarkMode;
@property (nonatomic) BOOL isDirectOpenEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)a0;
- (void)OnAskAuthorizationFailure:(id)a0 ForAuthInfo:(id)a1;
- (void)onAddressEditEnd:(id)a0;
- (void)startEditAddress;

@end
