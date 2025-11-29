@class UIImageView, MMUILabel, MMFinderLiveRecentRewardGiftItem;

@interface MMFinderLiveRecentRewardGiftItemView : UIView

@property (retain, nonatomic) UIImageView *giftImageView;
@property (retain, nonatomic) MMUILabel *giftCountLabel;
@property (retain, nonatomic) MMFinderLiveRecentRewardGiftItem *giftItem;
@property (nonatomic) BOOL isIdle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 GiftItem:(id)a1;
- (id)initLastOneWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 GiftItem:(id)a1;
- (void)initMoreLabel;
- (void)setNotIdleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateGiftImage;
- (void)updateCountLabel;
- (id)getDefaultGiftThumbImage;
- (void)updateItem:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
