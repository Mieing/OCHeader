@class NSString;

@interface IESECLynxTextArea : BDXLynxTextArea {
    NSString *_pageUrl;
}

+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__781;
+ (id)__lynx_ui_method_config__852;
+ (id)__lynx_ui_method_config__1123;
+ (id)__lynx_ui_method_config__1184;
+ (id)__lynx_prop_config__1305;
+ (id)__lynx_prop_config__1486;

- (void)layoutDidFinished;
- (void)emitEvent:(id)a0 detail:(id)a1;
- (void)onWillShowKeyboard:(id)a0;
- (void)onWillHideKeyboard:(id)a0;
- (void)applyAutoHeight;
- (void)addText:(id)a0 withResult:(id /* block */)a1;
- (void)addMention:(id)a0 withResult:(id /* block */)a1;
- (void)getMentions:(id)a0 withResult:(id /* block */)a1;
- (void)insertTextWithMentions:(id)a0 withResult:(id /* block */)a1;
- (void)setRichType:(id)a0 requestReset:(BOOL)a1;
- (void)setLineSpacing:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)view;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)createView;

@end
