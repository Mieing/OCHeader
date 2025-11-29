@class MMLiveColorfulLabel, WCFinderLiveHomePageAggregationAnchorHeaderInfoView;

@interface WCFinderLiveHomePageAggregationImageInfoCard : WCFinderLiveHomePageAggregationBaseCard

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) WCFinderLiveHomePageAggregationAnchorHeaderInfoView *headerInfoView;

- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)a0;
- (BOOL)showHeaderInfo;
- (void).cxx_destruct;

@end
