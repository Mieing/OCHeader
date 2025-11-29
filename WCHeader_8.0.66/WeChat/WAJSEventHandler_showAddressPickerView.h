@class NSString;

@interface WAJSEventHandler_showAddressPickerView : WAJSEventHandler_BaseEvent <IWAWebViewPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)showPicker:(id)a0 mode:(id)a1;
- (void)onError:(id)a0;
- (void)onSuccess:(id)a0;
- (void)onConfirmCancel;

@end
