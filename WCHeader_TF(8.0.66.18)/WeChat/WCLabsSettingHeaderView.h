@class UIImageView, MMUILabel;

@interface WCLabsSettingHeaderView : UIView {
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_leftBGIcon;
    UIImageView *_rightBGIcon;
    UIImageView *_labsIcon;
}

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (double)getTitleFontSize;
- (void)initBackground;
- (void)initLabsIcon;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void).cxx_destruct;

@end
