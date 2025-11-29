@class MMBadgeView, UIView, MMWebImageView, MMUILabel;

@interface WCLabsSettingCell : UITableViewCell {
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMWebImageView *_thumbImageView;
    UIView *_backgroundView;
    MMBadgeView *_badgeView;
    UIView *_maskView;
}

+ (double)heightForLabsItem:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)configureWithLabsItem:(id)a0;
- (void)initBackgroundView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initThumbImageView;
- (void)initBadgeView;
- (void)initMaskView;
- (void).cxx_destruct;

@end
