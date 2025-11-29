@class NSMutableParagraphStyle, AWEFriendsShareItem, UILabel, UIButton;
@protocol AWECollectionFriendsShareCellDelegate;

@interface AWECollectionFriendsShareCell : UICollectionViewCell

@property (retain, nonatomic) AWEFriendsShareItem *item;
@property (retain, nonatomic) UIButton *avatarButton;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) NSMutableParagraphStyle *paragraphStyle;
@property (weak, nonatomic) id<AWECollectionFriendsShareCellDelegate> delegate;

- (void)onAvatarButtonTap:(id)a0;
- (void)reuseWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
