@interface _TtCVV6WeChat4MMUI25GrowTextViewRepresentable11Coordinator : NSObject <MMGrowTextViewDelegate> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ environmentValues;
}

- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)onClickTextViewSendText:(id)a0;
- (void)TextViewHeightDidChanged:(id)a0;
- (struct CGSize { double x0; double x1; })maxSizeForTextView:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
