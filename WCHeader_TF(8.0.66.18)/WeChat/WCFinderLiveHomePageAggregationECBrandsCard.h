@class MMLiveColorfulLabel, NSArray;

@interface WCFinderLiveHomePageAggregationECBrandsCard : WCFinderLiveHomePageAggregationBaseCard

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *subTitleLabel;
@property (retain, nonatomic) NSArray *promotingViews;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithCard:(id)a0;
- (void)layoutSubviews;
- (id)currentGroupEntryBuffer;
- (void).cxx_destruct;

@end
