@interface WAJSEventHandler_openMyAddress : WAJSEventHandler_BaseEvent

@property (nonatomic) BOOL isFromManage;

- (void)handleJSEvent:(id)a0;
- (void)onAddressEditEnd:(id)a0;
- (void)startEditAddress:(id)a0;

@end
