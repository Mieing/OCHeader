@class AWEUILoadingView, UIView;

@interface AWEAIOriginalEmptyPageView : UIView

@property (retain, nonatomic) UIView *errorStateContainerView;
@property (retain, nonatomic) AWEUILoadingView *loading;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ retryAction;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
