@interface AWEAdModalWebViewController : AWEAdWebViewController

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)needChangeBar;
- (void)setupAppendixView:(id)a0;
- (void)updateNavigationItemOnErrorIfNeeded;
- (id)init;

@end
