@class NSArray, UIButton, UIView;
@protocol AWELongPressPanelSegmentViewDelegate;

@interface AWELongPressPanelSegmentView : UIView

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) UIView *btnBackView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIButton *selectedBtn;
@property (nonatomic) long long selectedIndex;
@property (weak, nonatomic) id<AWELongPressPanelSegmentViewDelegate> delegate;

- (void)setDefaultSelectIndex:(long long)a0;
- (void)setupHighlightStyle;
- (void)btnDidClick:(id)a0;
- (void)btnClick:(id)a0 isUserAction:(BOOL)a1;
- (struct CGSize { double x0; double x1; })animationViewSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestingEdgeInsets;
- (double)animationViewCornerRadius;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (double)backgroundCornerRadius;
- (id)initWithItems:(id)a0 delegate:(id)a1;
- (double)titleLabelFontSize;

@end
