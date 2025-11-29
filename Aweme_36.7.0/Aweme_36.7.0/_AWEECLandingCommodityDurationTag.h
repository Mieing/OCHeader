@class UIImageView, UILabel, UIView;

@interface _AWEECLandingCommodityDurationTag : UIView {
    UIView *_backgroundView;
    UIImageView *_iconView;
    UILabel *_durationLabel;
}

- (void)updateWithMerchandise:(id)a0;
- (void).cxx_destruct;
- (id)formatDuration:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
