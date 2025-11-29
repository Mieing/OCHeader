@class NSArray, UIView;
@protocol AWEScreenShootPopoverCoverViewDelegate;

@interface AWEScreenShootPopoverCoverView : UIView

@property (weak, nonatomic) id<AWEScreenShootPopoverCoverViewDelegate> delegate;
@property (nonatomic) BOOL canPenetrate;
@property (copy, nonatomic) NSArray *canPenetrateViewArray;
@property (weak, nonatomic) UIView *triggerView;

- (BOOL)canPenetrateInViewArrayWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
