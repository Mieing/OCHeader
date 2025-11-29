@class UIImageView, UILabel, UIView;

@interface AWERelatedRecommendAnchorView : UIView

@property (class, readonly, nonatomic) double originIconHeight;

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *anchorTextLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic) double iconWidth;
@property (nonatomic) BOOL isBorderStyle;
@property (readonly, nonatomic) double totalWidth;

- (void)refreshWithModel:(id)a0;
- (void)updateIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)init;

@end
