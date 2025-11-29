@class UIImageView, UILabel;

@interface AWEMusicCollectionPlaylistCardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *privateMarkView;
@property (retain, nonatomic) UIImageView *myFavoriteIcon;

+ (struct CGSize { double x0; double x1; })coverSize;

- (void)configSubviews;
- (void)refreshWithCoverImageUrl:(id)a0 placeholderImage:(id)a1 playlistName:(id)a2 isPrivate:(BOOL)a3 isInvalid:(BOOL)a4 isFavorite:(BOOL)a5;
- (void)resetToCreateCard;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
