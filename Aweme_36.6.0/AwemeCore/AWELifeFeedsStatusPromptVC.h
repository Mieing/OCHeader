@interface AWELifeFeedsStatusPromptVC : UIViewController

@property (copy, nonatomic) id /* block */ retryAction;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageBelowView;
- (void).cxx_destruct;

@end
