@class NSString;

@interface WAJSEventHandler_showDatePickerView : WAJSEventHandler_BaseEvent <WAWebViewPluginPickerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onCancel;
- (void)onDateTimeConfirm:(id)a0;

@end
