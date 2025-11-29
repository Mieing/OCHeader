@class UIImageView, UILabel, UIView;

@interface AWENewVideoCoverPreviewAvatarView : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *idLabel;
@property (retain, nonatomic) UILabel *postLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
