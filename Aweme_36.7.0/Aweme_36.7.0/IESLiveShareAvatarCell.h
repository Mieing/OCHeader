@class HTSLiveAvatarImageView, UIImageView, UILabel;

@interface IESLiveShareAvatarCell : UICollectionViewCell

@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) UIImageView *selectionButton;
@property (retain, nonatomic) UILabel *titleLable;

- (void)refreshWithSelected:(BOOL)a0;
- (void)refreshWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
