@class UILabel, UIImageView, AWEUserWorkCellContext;

@interface AWEUserWorkWaterFallFavoriteBottomView : UIView

@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *authorAvatarIconView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) AWEUserWorkCellContext *context;
@property (copy, nonatomic) id /* block */ rightTapActionBlock;

- (void)setIconWith:(id)a0;
- (void)updateWithModel:(id)a0 countString:(id)a1;
- (id)iconImageAdaptiveBigModeWith:(id)a0;
- (struct CGSize { double x0; double x1; })likeIconSize;
- (double)countFontSizeAdaptiveBigMode;
- (double)widthWithText:(id)a0;
- (void)iconImageViewTapped:(id)a0;
- (void)rightActionButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)setupSubviews;

@end
