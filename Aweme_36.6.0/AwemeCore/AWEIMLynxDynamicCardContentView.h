@class AWEIMLynxDynamicCardContentProps, UIView;

@interface AWEIMLynxDynamicCardContentView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEIMLynxDynamicCardContentProps *props;

- (void)updateWithProps:(id)a0;
- (void)p_updateLynxCardSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateContainer;
- (void)p_updateContainerSize;
- (id)p_getLynxContainerView;
- (id)p_getLiveLynxContainerView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
