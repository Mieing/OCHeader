@class AWENearbyC2FeedDualAnchorView, AWENearbyPaddingLabel, UIView;

@interface AWENearbyC2FeedDualAnchorContainerView : UIView

@property (retain, nonatomic) AWENearbyPaddingLabel *adLabel;
@property (retain, nonatomic) AWENearbyC2FeedDualAnchorView *anchorView;
@property (retain, nonatomic) UIView *viewClickHandleView;

- (void)updateAnchorInfoWithVideoAttr:(id)a0 maxWidth:(double)a1;
- (void)updateInfoWithModel:(id)a0 maxWidth:(double)a1;
- (void)shouldHiddenAdLabel:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
