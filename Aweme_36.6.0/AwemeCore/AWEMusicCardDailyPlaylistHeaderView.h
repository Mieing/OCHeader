@class UIColor, NSString, UIImageView, UILabel;

@interface AWEMusicCardDailyPlaylistHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *lunaIconView;
@property (nonatomic) BOOL isAdaptFontMode;
@property (retain, nonatomic) UIColor *titleImageTintColor;
@property (retain, nonatomic) UIColor *dateLabelBackgroundColor;
@property (copy, nonatomic) NSString *dateContent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIImageView *backgroundTitleView;
@property (retain, nonatomic) UILabel *dateLabel;

+ (double)viewHeightWithIsAdaptBigFontMode:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needAdaptFontMode:(BOOL)a1;
- (double)p_titleLabelFontSize;
- (id)drawTitleImage;
- (id)getHorizonGradientImage;
- (id)getVerticalGradientImage;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
