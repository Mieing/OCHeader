@class NSString;

@interface WAJSEventHandler_sdk_openAppProfile : WAJSEventHandler_BaseEvent <WAProfileViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onBackNavButtonClick;

@end
