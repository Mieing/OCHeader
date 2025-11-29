@class IESECImageNumberView, UIImageView, IESECCommentShowNormalCellModel, UILabel, IESECHighlightButton;

@interface IESECCommentShowNormalCell : UICollectionViewCell

@property (retain, nonatomic) IESECCommentShowNormalCellModel *cellModel;
@property (retain, nonatomic) UIImageView *mainPicView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) IESECImageNumberView *picNumberView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) IESECHighlightButton *likeButton;
@property (copy, nonatomic) id /* block */ clickLikeButton;

+ (double)cellHeightWithModel:(id)a0 width:(double)a1;
+ (double)heightCompareToWidthScale:(id)a0;
+ (double)pictureHeightWithModel:(id)a0 width:(double)a1;

- (void)configWithCommentModel:(id)a0;
- (void)toggleLikeButtonState;
- (void)clickLikeButtonAction:(id)a0;
- (void)updateLikeButtonStateWithCommentModel:(id)a0;
- (void)updateLikeButtonState:(BOOL)a0;
- (void)updateLikeButtonText:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
