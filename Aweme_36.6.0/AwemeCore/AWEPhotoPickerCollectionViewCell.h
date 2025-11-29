@class UIImageView, UILabel, UIView, AWEAssetModel;

@interface AWEPhotoPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UIImageView *livephotoIconView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) int imageRequestId;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) BOOL assetSelected;
@property (nonatomic) BOOL showLivePhotoIcon;

+ (id)identifier;

- (id)dateSpeakString;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;
- (id)mediaInfo;

@end
