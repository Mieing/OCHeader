@class UIButton;

@interface LiveLuckyBagTextMessageCellView : TextMessageCellView {
    UIButton *m_sourceButton;
}

- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setViewModel:(id)a0;
- (BOOL)touchIntoSelectCopyState;
- (BOOL)canShowRevokeMsgMenuItem;
- (id)operationMenuItems;
- (void)layoutContentView;
- (void)initSourceLabel;
- (void)reportClick:(unsigned long long)a0;
- (void).cxx_destruct;

@end
