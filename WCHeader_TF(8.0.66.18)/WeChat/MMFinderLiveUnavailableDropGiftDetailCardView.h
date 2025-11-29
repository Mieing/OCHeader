@class UIColor, MMUILabel, UIFont;

@interface MMFinderLiveUnavailableDropGiftDetailCardView : MMFinderLiveDetailCardView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;

- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)a0;
- (void)refreshLayout;
- (void).cxx_destruct;

@end
