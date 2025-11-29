@class WCFinderCoverBasePreviewView, WCEditImageSafeAreaScrollView;

@interface WCFinderCoverBackGroundView : UIView

@property (weak, nonatomic) WCFinderCoverBasePreviewView *previewView;
@property (weak, nonatomic) WCEditImageSafeAreaScrollView *eIScrollView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
