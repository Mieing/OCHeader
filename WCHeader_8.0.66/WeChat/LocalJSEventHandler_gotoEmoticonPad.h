@class NSString, WSEmoticonPadViewController;

@interface LocalJSEventHandler_gotoEmoticonPad : LocalJSEventHandler_BaseEvent <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>

@property (retain, nonatomic) WSEmoticonPadViewController *emoticonPad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onSendButtonClicked;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (void)addDownloadTaskWith:(id)a0;
- (void).cxx_destruct;

@end
