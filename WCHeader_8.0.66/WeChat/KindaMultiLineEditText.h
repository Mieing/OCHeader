@class MMDynamicColor, NSString, MMVoidCallback, MMVoidStringCallback, MMVoidBoolCallback, MMTextView;

@interface KindaMultiLineEditText : KindaView <UITextViewDelegate, MMKMultiLineEditText> {
    double _textSize;
    MMDynamicColor *_textColor;
    MMDynamicColor *_hintColor;
    long long _textAlign;
    NSString *_fontName;
    int _maxLength;
}

@property (retain, nonatomic) MMTextView *textView;
@property (retain, nonatomic) MMVoidCallback *textEndEditingCallBack;
@property (retain, nonatomic) MMVoidStringCallback *textChangedCallback;
@property (retain, nonatomic) MMVoidBoolCallback *onFocusChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setText:(id)a0;
- (id)getText;
- (void)setTextSize:(float)a0;
- (float)getTextSize;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (void)setTextFont:(id)a0;
- (id)getTextFont;
- (void)setTextAlign:(long long)a0;
- (long long)getTextAlign;
- (void)setHint:(id)a0;
- (id)getHint;
- (void)setHintColor:(id)a0;
- (id)getHintColor;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setMaxLength:(int)a0;
- (int)getMaxLength;
- (void)setEnabled:(BOOL)a0;
- (BOOL)getEnabled;
- (void)setOnTextEndEditingImpl:(id)a0;
- (void)setOnFocusChangedImpl:(id)a0;
- (void)setOnTextChangedImpl:(id)a0;
- (double)currentMinHeight;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void).cxx_destruct;

@end
