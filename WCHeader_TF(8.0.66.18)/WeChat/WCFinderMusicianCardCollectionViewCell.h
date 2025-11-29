@class UILabel, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface WCFinderMusicianCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithSingerInfo:(id)a0;
- (void)adjustAllSubviews;
- (void).cxx_destruct;

@end
