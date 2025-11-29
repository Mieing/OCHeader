@class NSString;

@interface WAJSEventHandler_jumpRedPacketEnvelopePreview : WAJSEventHandler_BaseEvent <PreviewContentLogicControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onPreviewContentLogicControllerBack;

@end
