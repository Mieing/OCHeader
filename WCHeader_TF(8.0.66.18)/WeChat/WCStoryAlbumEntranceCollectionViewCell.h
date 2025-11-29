@class MMBadgeView, UIImageView, UILabel, MMUIButton;
@protocol WCStoryAlbumEntranceCollectionViewCellDelegate;

@interface WCStoryAlbumEntranceCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMUIButton *containerButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL showsBadge;
@property (weak, nonatomic) id<WCStoryAlbumEntranceCollectionViewCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onClickAction;
- (void).cxx_destruct;

@end
