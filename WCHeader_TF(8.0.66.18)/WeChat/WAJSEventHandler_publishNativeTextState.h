@class NSString;

@interface WAJSEventHandler_publishNativeTextState : WAJSEventHandler_BaseEvent <TextStatePublishViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onTextStatePublishedWithTextState:(id)a0 thumbImageData:(id)a1;
- (void)onTextStatePublishCancelled;

@end
