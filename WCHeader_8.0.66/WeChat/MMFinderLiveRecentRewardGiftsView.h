@class NSMutableArray;
@protocol MMFinderLiveRecentRewardGiftsViewDelegate;

@interface MMFinderLiveRecentRewardGiftsView : UIView

@property (retain, nonatomic) NSMutableArray *reservedItemViews;
@property (weak, nonatomic) id<MMFinderLiveRecentRewardGiftsViewDelegate> delegate;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) double maxLength;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickListOneItemView;
- (void)refreshContentWithUserItem:(id)a0;
- (id)addAndItemViewToSubViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 giftItem:(id)a1;
- (void)cleanUnresersedGiftItemViews;
- (void)resetReservedItemViewsState;
- (void).cxx_destruct;

@end
