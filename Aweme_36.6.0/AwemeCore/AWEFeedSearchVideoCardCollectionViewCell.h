@class NSString, UIImageView, UILabel, UIView;

@interface AWEFeedSearchVideoCardCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *mixVideoIconView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *starCountLabel;
@property (retain, nonatomic) UIImageView *starCountImageView;
@property (retain, nonatomic) UIImageView *mediaTypeView;
@property (nonatomic) double currentAlpha;
@property (nonatomic) BOOL preferedShowPostTime;
@property (retain, nonatomic) UIView *descriptionContainerView;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMixVideo:(id)a0;

- (void)updateWithAweme:(id)a0;
- (id)appendMixVideoTagIfNeededWithAweme:(id)a0 attributedString:(id)a1;
- (id)firstAvailableLabelForAweme:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;

@end
