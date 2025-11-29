@interface AWECommentPostStateView : UILabel

@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) id /* block */ retryActionBlock;

- (void)onUIThemeChange;
- (void)showRetryingState;
- (void)showFailedState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction:(id)a0;

@end
