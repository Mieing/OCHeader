@class MMLiveColorfulLabel, NSArray, CADisplayLink, UIView;

@interface WCFinderLiveHomePageAggregationEntertainmentChannelsCard : WCFinderLiveHomePageAggregationBaseCard

@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (retain, nonatomic) MMLiveColorfulLabel *subTitleLabel;
@property (retain, nonatomic) UIView *containerCollectionView;
@property (retain, nonatomic) NSArray *collectionViews;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double layoutHeight;
@property (nonatomic) unsigned long long calculateLineCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recreateCollectionView;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateWithCard:(id)a0;
- (void)reloadCollectionView;
- (void)handleScroll;
- (void)layoutSubviews;
- (id)currentGroupEntryBuffer;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)startScroll;
- (void)stopScroll;
- (void)updateInitialOffset;
- (void).cxx_destruct;

@end
