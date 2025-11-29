@class PAGView;

@interface MMFinderLiveGenericFullTapEducationView : UIView

@property (retain, nonatomic) PAGView *animationView;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)show;
- (void)hide;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
