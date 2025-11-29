@class NSMutableArray;

@interface FavMultiSelectToolView : WCBottomBar {
    NSMutableArray *m_btnArray;
}

- (void)addButtonType:(unsigned long long)a0 selector:(SEL)a1 target:(id)a2;
- (void)clearAllBtn;
- (id)createBtnWithImg:(id)a0 accessibilityStr:(id)a1 Sel:(SEL)a2 Target:(id)a3;
- (void)layoutView;
- (void)setBtnsEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
