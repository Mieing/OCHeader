@class UILabel;

@interface WCAccountTextFieldItem : WCBaseTextFieldItem {
    BOOL m_bUseGrayColor;
    UILabel *m_labelTip;
}

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftMargin:(double)a1 rightMargin:(double)a2 useGrayBackgroundColor:(BOOL)a3;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftMargin:(double)a1 rightMargin:(double)a2;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftMargin:(double)a1;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLeftTitleColor:(id)a0;
- (void)adjustFieldItemWidth:(double)a0;
- (void)setFont:(id)a0;
- (void)setTextContentType:(id)a0;
- (void).cxx_destruct;

@end
