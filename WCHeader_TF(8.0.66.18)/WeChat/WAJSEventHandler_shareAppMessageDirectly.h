@class NSString;

@interface WAJSEventHandler_shareAppMessageDirectly : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate> {
    BOOL _isSharing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)shareMsg:(id)a0 toContacts:(id)a1;
- (void)shareMsg:(id)a0 toContacts:(id)a1 forNativeWeApp:(BOOL)a2;
- (void)onError:(id)a0;
- (void)onSuccess:(id)a0;
- (void)onConfirmCancel;

@end
