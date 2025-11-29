@protocol AWERichTextJSBridgeDelegate;

@interface AWERichTextJSBridge : IESPiper

@property (weak, nonatomic) id<AWERichTextJSBridgeDelegate> delegate;
@property (copy, nonatomic) id /* block */ keyboardHeightBlock;
@property (copy, nonatomic) id /* block */ toolBarHeightBlock;
@property (copy, nonatomic) id /* block */ visualWebViewHeightBlock;

- (void)registerJSBridgeHandler;
- (void)editorChooseMention:(id)a0;
- (void)editorFocusParagraphTextSize:(id)a0;
- (void)editorShowToast:(id)a0;
- (void)editorIsTextInput:(id)a0;
- (void)setTextSizeChange:(id)a0;
- (void).cxx_destruct;

@end
