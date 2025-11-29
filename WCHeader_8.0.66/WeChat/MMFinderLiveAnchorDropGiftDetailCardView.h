@class UIColor, MMUILabel, UIFont;

@interface MMFinderLiveAnchorDropGiftDetailCardView : MMFinderLiveDetailCardView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIFont *descFont;
@property (retain, nonatomic) UIColor *descColor;

- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)a0;
- (void)refreshLayout;
- (void).cxx_destruct;

@end
