@class UIImageView, UILabel, CAShapeLayer;

@interface IESLiveCommentMentionUserCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImgView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) CAShapeLayer *tagMaskLayer;

- (void)refreshWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
