@class DUXPopoverCoverView, DUXPopover;

@interface DUXPopoverCoverModalView : UIView

@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) DUXPopoverCoverView *coverView;

- (void).cxx_destruct;
- (id)accessibilityElements;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
