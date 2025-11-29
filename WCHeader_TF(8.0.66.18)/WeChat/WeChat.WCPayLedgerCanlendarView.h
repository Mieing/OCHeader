@interface WeChat.WCPayLedgerCanlendarView : UIView {
    void /* unknown type, empty encoding */ days;
    void /* unknown type, empty encoding */ weekdayOffset;
    void /* unknown type, empty encoding */ todayOffset;
    void /* unknown type, empty encoding */ taggedDays;
    void /* unknown type, empty encoding */ selectionStart;
    void /* unknown type, empty encoding */ selectionEnd;
    void /* unknown type, empty encoding */ calendarDirty;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ hintLabels;
    void /* unknown type, empty encoding */ selectionBaseLayer;
    void /* unknown type, empty encoding */ kHintHeight;
    void /* unknown type, empty encoding */ kTodayHintTag;
    void /* unknown type, empty encoding */ ledgerDate;
    void /* unknown type, empty encoding */ onRangeSelectionUpdated;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
