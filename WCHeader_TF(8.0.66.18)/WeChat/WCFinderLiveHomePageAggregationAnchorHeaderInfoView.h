@class NSString, WCFinderLiveAggregationCardAnchorGroup, MMLiveColorfulLabel, NSMutableArray;

@interface WCFinderLiveHomePageAggregationAnchorHeaderInfoView : UIView

@property (retain, nonatomic) NSMutableArray *headImageViews;
@property (retain, nonatomic) WCFinderLiveAggregationCardAnchorGroup *anchorGroup;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) MMLiveColorfulLabel *textLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)updateWithAnchorGroup:(id)a0 title:(id)a1 textColors:(id)a2;
- (void)cropHeadViewIntersectionArea:(id)a0;
- (double)widthToFit:(double)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
