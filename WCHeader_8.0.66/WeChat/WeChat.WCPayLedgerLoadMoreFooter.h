@interface WeChat.WCPayLedgerLoadMoreFooter : MMRefreshTableFooterView {
    void /* unknown type, empty encoding */ indicator;
    void /* unknown type, empty encoding */ hintLabel;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void).cxx_destruct;

@end
