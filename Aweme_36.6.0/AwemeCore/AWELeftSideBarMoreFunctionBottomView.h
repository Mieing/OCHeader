@class DUXButton, UIView;
@protocol AWELeftSideBarMoreFunctionBottomViewDelegate;

@interface AWELeftSideBarMoreFunctionBottomView : UIView

@property (retain, nonatomic) DUXButton *backButton;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) id<AWELeftSideBarMoreFunctionBottomViewDelegate> delegate;

- (void)initBackButton;
- (void)initLineView;
- (void)onClickBackButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
