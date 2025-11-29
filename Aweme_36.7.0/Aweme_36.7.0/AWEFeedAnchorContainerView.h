@class UIView;
@protocol AWEAdAttachAreaView;

@interface AWEFeedAnchorContainerView : UIView

@property (nonatomic) BOOL isLokiAnchor;
@property (retain, nonatomic) UIView<AWEAdAttachAreaView> *attachTapArea;
@property (weak, nonatomic) UIView *childView;

- (void)layoutSubviews;
- (void)configAttachTapAreaIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
