@class UILabel, MMHeadImageView, MMWebImageView;

@interface ShakeTvTableViewCell : MMTableViewCell {
    MMWebImageView *_thumbImageView;
    MMHeadImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

- (void)updateWithShakeItemBase:(id)a0;
- (void)setSubTitle:(id)a0;
- (void).cxx_destruct;

@end
