@class EmoticonBoardView;

@interface WSWebViewPlugin_InputKeyboard : WSWebViewPluginBase <BaseEmoticonViewDelegate, EmoticonBoardViewDelegate> {
    void /* unknown type, empty encoding */ defaultAnimateDuration;
    void /* unknown type, empty encoding */ storedAnimateDuration;
    void /* unknown type, empty encoding */ monitorKeyboard;
    void /* unknown type, empty encoding */ keyBoardHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_emoticonBoardView;
}

@property (nonatomic, retain) EmoticonBoardView *emoticonBoardView;

- (void)didSelectorEmoticon:(id)a0;
- (void)deleteEmoticon;
- (void)onSendButtonClicked;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)showEmoticonBoardWithAnimateDuration:(double)a0;
- (void)hideEmoticonBoardWithAnimateDuration:(double)a0;
- (double)getEmoticonBoardHeight;
- (void)resignResponder;
- (void)sendToH5WithEmoticonText:(id)a0;
- (double)ajustedAnimateDuration:(double)a0;
- (id)init;
- (void).cxx_destruct;

@end
