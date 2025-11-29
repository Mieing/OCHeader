@class AWEAssetModel, UIImageView, AWECircularProgressView, UILabel, ACCGradientMaskView, UIView;

@interface AWEVideoGalleryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) ACCGradientMaskView *selectedGradientView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *selectPhotoView;
@property (retain, nonatomic) UIImageView *unCheckImageView;
@property (retain, nonatomic) UIImageView *numberBackGroundImageView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) AWECircularProgressView *circularProgressView;
@property (nonatomic) BOOL animationFinished;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (nonatomic) BOOL useForAmericaRecordOptim;
@property (nonatomic) BOOL checkMarkSelectedStyle;
@property (copy, nonatomic) id /* block */ didSelectPhotoBlock;
@property (copy, nonatomic) id /* block */ didFetchThumbnailBlock;

+ (id)identifier;

- (void)showAlreadySelectedHint:(BOOL)a0;
- (double)checkImageHeight;
- (void)selectPhotoButtonClick:(id)a0;
- (void)configureCellWithAsset:(id)a0 greyMode:(BOOL)a1 showRightTopIcon:(BOOL)a2 alreadySelect:(BOOL)a3;
- (void)removeiCloudKVOObservor;
- (void)addiCloudKVOObservor;
- (void)updatePhotoSelectedWithNum:(id)a0 greyMode:(BOOL)a1;
- (void)runScaleAnimationWithCallback:(id /* block */)a0;
- (void)doSelectedAnimation;
- (void)configureCellWithAsset:(id)a0 greyMode:(BOOL)a1 showRightTopIcon:(BOOL)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)thumbnailImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
