@class NSMutableArray, UIView;
@protocol CJPayDynamicLayoutViewDelegate;

@interface CJPayDynamicLayoutView : UIStackView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) NSMutableArray *dynamicViews;
@property (retain, nonatomic) UIView *placeholderView;
@property (weak, nonatomic) id<CJPayDynamicLayoutViewDelegate> delegate;

- (void)updateWithContentViews:(id)a0 isLayoutInstantly:(BOOL)a1;
- (void)setDynamicLayoutSubviewHiddenStatus:(id)a0;
- (void)removeDynamicLayoutSubview:(id)a0;
- (void)insertDynamicLayoutSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)updatePlaceholderViewForUnchangedHeight;
- (void)updateConstraintForView:(id)a0 superView:(id)a1;
- (id)p_createStackContentView:(id)a0;
- (void)addDynamicLayoutSubview:(id)a0;
- (BOOL)p_needUnchangeHeight;
- (unsigned long long)p_placeholderViewIndex;
- (BOOL)isPlaceholderViewShown;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
