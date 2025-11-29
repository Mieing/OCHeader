@class UIStackView;

@interface IESECLStackContainerView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double spacing;
@property (nonatomic) long long alignment;
@property (nonatomic) long long distribution;
@property (nonatomic) BOOL alignRight;
@property (copy, nonatomic) id /* block */ onLayoutBlock;

- (void)removeAllArrangedSubviews;
- (id)initWithSubViews:(id)a0;
- (void)setupWithSubViews:(id)a0;
- (id)subViews;
- (void)updateStackConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addArrangedSubview:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;

@end
