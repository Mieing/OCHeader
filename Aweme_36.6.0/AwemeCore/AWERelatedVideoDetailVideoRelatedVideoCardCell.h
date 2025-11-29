@class UIButton, AWERVListTagView, UIImageView, AWEAwemeModel, UILabel, BDImageView;

@interface AWERelatedVideoDetailVideoRelatedVideoCardCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UIButton *diggButton;
@property (retain, nonatomic) AWERVListTagView *tagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ renderImgBlock;
@property (copy, nonatomic) id /* block */ renderTextBlock;

+ (double)coverWidthHeightRatioForAwemeModel:(id)a0;
+ (id)adaptTitleForAwemeModel:(id)a0;
+ (double)requiresExtraHeightWithTagView;
+ (struct CGSize { double x0; double x1; })sizeForAwemeModel:(id)a0 width:(double)a1 context:(id)a2;
+ (id)titleFont;

- (void)configWithAwemeModel:(id)a0 context:(id)a1;
- (void)updateBackgroundColorInDarkThemeIfNeed;
- (void)updateUIWithTagViewIfNeeded:(id)a0;
- (void)updateAwemeModelForLongVideo:(id)a0;
- (double)diggButtonWidth;
- (void)setLongVideoTitle:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
