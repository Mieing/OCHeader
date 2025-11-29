@class UILabel, UIColor, UIImageView, AWEAwemeModel, AWEGradientView, UIView, AWEPOIMarkView;

@interface AWEPOINearbyHotCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *bottomGradientMaskView;
@property (retain, nonatomic) AWEPOIMarkView *poiButton;
@property (retain, nonatomic) AWEPOIMarkView *poiColorfulButton;
@property (retain, nonatomic) AWEPOIMarkView *distanceButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate2D;
@property (retain, nonatomic) UIColor *originColor;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;
+ (double)coverImageRatioForAweme:(id)a0;

- (void)updateWithAweme:(id)a0;
- (void)updateWithAweme:(id)a0 coordinate2D:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
