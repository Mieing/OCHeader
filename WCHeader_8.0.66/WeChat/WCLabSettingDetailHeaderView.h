@class UIView, MMUILabel, MMWebImageView;

@interface WCLabSettingDetailHeaderView : UIView {
    MMWebImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIView *_lineView;
}

+ (double)heightForLabItem:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)a0;
- (void)initIconView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initLineView;
- (void).cxx_destruct;

@end
