@class NSString, UIImageView, AWEMarkView, UILabel;

@interface AWEFeedNearbyPoiDownCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEMarkView *poiButton;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (nonatomic) double currentAlpha;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (id)addBottomGradientView;
- (void)_updateTagsWithAweme:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;

@end
