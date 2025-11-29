@class NSMutableArray, UIView;

@interface AWEGouponC2FeedDualAnchorView : UIView

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (nonatomic) double maxContainerWidth;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *itemViewList;
@property (nonatomic) double itemMarginLeft;

- (void)updateDualAnchorViewData:(id)a0 maxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })anchorContentSize;
- (void)p_resetItemsArray;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
