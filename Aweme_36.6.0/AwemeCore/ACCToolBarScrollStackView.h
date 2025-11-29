@class UIStackView;
@protocol ACCToolBarScrollStackViewDelegate;

@interface ACCToolBarScrollStackView : UIScrollView

@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<ACCToolBarScrollStackViewDelegate> scrollStackViewDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
