@class WCFinderLiveHomePageFeedAggregationCardVM, WCFinderLiveAggregationCard, MMWebImageView;

@interface WCFinderLiveHomePageAggregationBaseCard : UIView

@property (retain, nonatomic) MMWebImageView *bgImgView;
@property (retain, nonatomic) WCFinderLiveAggregationCard *card;
@property (copy, nonatomic) id /* block */ backgroundTapAction;
@property (retain, nonatomic) WCFinderLiveHomePageFeedAggregationCardVM *feedVM;
@property (copy, nonatomic) id /* block */ itemActionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithCard:(id)a0;
- (BOOL)useImgMode;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (unsigned long long)currenLoopPageIndex;
- (void)willDisplay;
- (void)didEndDisplay;
- (void).cxx_destruct;

@end
