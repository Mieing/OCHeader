@class UIView;

@interface LSStatusView : UIView

@property (nonatomic) long long state;
@property (nonatomic) long long layoutType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutEdgeInsets;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *errorView;

- (void)removeOldView:(id)a0 addNewView:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
