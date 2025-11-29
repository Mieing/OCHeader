@class NSMutableArray, WCFinderLiveAggregationCardAnchorGroup, UIView;

@interface WCFinderLiveHomePageAggregationAnchorCarouselGroup : UIView

@property (retain, nonatomic) WCFinderLiveAggregationCardAnchorGroup *group;
@property (retain, nonatomic) UIView *headInfoBgView;
@property (retain, nonatomic) NSMutableArray *headInfoViews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithGroup:(id)a0;
- (BOOL)isSmallScreen;
- (void).cxx_destruct;

@end
