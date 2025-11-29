@class UIStackView;

@interface IESLivePublicScreenContainer : UIView

@property (retain, nonatomic) UIStackView *container;

- (id)initWithDIContext:(id)a0;
- (void)removePublicScreenComponentWithConfigModel:(id)a0;
- (BOOL)isAllowList:(id)a0;
- (void)enumerateArrangedViewsUsingBlock:(id /* block */)a0;
- (void)updateConstraintsWithComponent:(id)a0;
- (void)handleConfigModel:(id)a0;
- (id)queryViewWithType:(id)a0;
- (unsigned long long)arrangedViewsCount;
- (void)addPublicScreenComponent:(id)a0 withConfigModel:(id)a1;
- (void)updateConstraintsForAllComponents;
- (void).cxx_destruct;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
