@class UILabel, MMWebImageView;

@interface MMFinderLiveShopShelfItemReplayInvalidTipsView : UIView

@property (class, readonly, nonatomic) double preferHeight;

@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) UILabel *label;

+ (BOOL)willDisplayWithReplayInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithReplayInfo:(id)a0;
- (void).cxx_destruct;

@end
