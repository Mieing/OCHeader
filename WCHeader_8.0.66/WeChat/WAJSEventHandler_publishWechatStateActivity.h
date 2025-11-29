@class TextStateBrandLogic;

@interface WAJSEventHandler_publishWechatStateActivity : WAJSEventHandler_BaseEvent <TextStateBrandLogicDelegate>

@property (retain, nonatomic) TextStateBrandLogic *brandLogic;

- (void)handleJSEvent:(id)a0;
- (void)onTextStatePublished;
- (void)onTextStatePublishCancelled;
- (void).cxx_destruct;

@end
