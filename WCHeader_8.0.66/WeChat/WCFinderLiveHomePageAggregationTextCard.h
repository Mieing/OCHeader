@class MMLiveColorfulLabel, UIImageView, UIView, NSMutableArray;

@interface WCFinderLiveHomePageAggregationTextCard : WCFinderLiveHomePageAggregationBaseCard

@property (retain, nonatomic) NSMutableArray *headInfoViews;
@property (retain, nonatomic) UIView *headInfoBgView;
@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)a0;
- (void).cxx_destruct;

@end
