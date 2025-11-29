@interface FlowVoiceCall.VoiceCallSuggestionTipsView : UIView {
    void /* unknown type, empty encoding */ tipsDidScrollBlock;
    void /* unknown type, empty encoding */ currentLabel;
    void /* unknown type, empty encoding */ nextLabel;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ textArray;
    void /* unknown type, empty encoding */ themeStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientColors;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollSpeed;
}

- (void)scrollText;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
