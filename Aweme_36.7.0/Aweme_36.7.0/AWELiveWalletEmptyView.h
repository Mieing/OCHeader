@interface AWELiveWalletEmptyView : NSObject

- (id)createEmptyViewWithEdgeInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 tapAction:(id /* block */)a1 resolveAction:(id /* block */)a2;
- (void)useEmptyViewEdgeInsetsOn:(id)a0;
- (id)awelive_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForEmptyView;
- (void)useEmptyPageConfigOn:(id)a0;

@end
