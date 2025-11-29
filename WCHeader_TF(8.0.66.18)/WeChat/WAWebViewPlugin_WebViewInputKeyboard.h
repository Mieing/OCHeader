@interface WAWebViewPlugin_WebViewInputKeyboard : WAWebViewPluginBase

- (id)init;
- (void)onKeyboardWillShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)a0 duration:(double)a1;

@end
