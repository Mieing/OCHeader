@class NSNumber;

@interface WCFinderProgressBarAnchorPointView : UIView

@property (retain, nonatomic) NSNumber *anchorPointNumber;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithAnchorPointValue:(id)a0;
- (BOOL)shouldShow;
- (BOOL)shouldTriggerHaptic:(double)a0;
- (double)anchorPointValue;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
