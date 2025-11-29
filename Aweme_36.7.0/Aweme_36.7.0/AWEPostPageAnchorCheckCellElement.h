@interface AWEPostPageAnchorCheckCellElement : AWEPostPageCellElement

- (void)bindServices:(id)a0;
- (void)setupCell:(id)a0;
- (void)configPlaceholderUI;
- (void)showAnchorLoadingIfNeeded:(id)a0 state:(long long)a1;
- (void)startLoading;
- (void)viewDidAppear:(BOOL)a0;
- (id)currentCell;
- (BOOL)canSelect;

@end
