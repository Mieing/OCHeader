@class UIFont, UIColor, UIImageView, MMWebImageView, UIView, MMUILabel;

@interface MMFinderLiveAudienceDropGiftDetailCardView : MMFinderLiveDetailCardView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *subDescLabel;
@property (retain, nonatomic) MMWebImageView *giftImageView;
@property (retain, nonatomic) UIImageView *liveIconsImageView;
@property (retain, nonatomic) MMUILabel *liveIconSumLabel;
@property (retain, nonatomic) UIView *liveIconContainerView;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *descFont;
@property (retain, nonatomic) UIFont *coinSumFont;
@property (retain, nonatomic) UIFont *subDescFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *descColor;
@property (retain, nonatomic) UIColor *coinSumColor;
@property (retain, nonatomic) UIColor *subDescColor;

- (void)setup;
- (void)layoutSubviews;
- (void)refreshLayout;
- (void)updateViewModel:(id)a0;
- (void).cxx_destruct;

@end
