@class NSString, WCFinderLiveHomePageFeedAggregationCardVM, WCFinderLiveHomePageAggregationBaseCard;
@protocol WCFinderLiveHomePageAggregationCardCellDelegate;

@interface WCFinderLiveHomePageAggregationCardCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageFeedAggregationCardVMDelegate, WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageFeedAggregationCardVM *feedVM;
@property (retain, nonatomic) WCFinderLiveHomePageAggregationBaseCard *currentCard;
@property (weak, nonatomic) id<WCFinderLiveHomePageAggregationCardCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardMode2CardClassMap;
+ (Class)classWithMode:(unsigned long long)a0;
+ (Class)cardClass;
+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initCardViewIfNeeded;
- (void)layoutSubviews;
- (void)updateWithFeedVM:(id)a0;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)didMoveToWindow;
- (id)currentGroupEntryBuffer;
- (id)currentGroupJumpBypassBuffer;
- (void)onAggregationCardUpdate;
- (void)onAggregationCardGetPagFile;
- (unsigned long long)getCurrentLoopPageIndex;
- (void).cxx_destruct;

@end
