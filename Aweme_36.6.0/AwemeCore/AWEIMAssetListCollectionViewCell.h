@class IESIMLivePhotoTagView, NSIndexPath, UILabel, PHAsset, AWEIMEditedAssetModel, UIView, BDImageView, NSString, UILongPressGestureRecognizer, CAGradientLayer, NSNumber, AWEIMAssetCellSelectStatusView, UIImageView;
@protocol AWEIMAssetListCollectionViewCellDelegate;

@interface AWEIMAssetListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) int requestID;
@property (retain, nonatomic) IESIMLivePhotoTagView *livePhotoTag;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *touchView;
@property (retain, nonatomic) UIView *disableMaskView;
@property (retain, nonatomic) AWEIMAssetCellSelectStatusView *selectStatusView;
@property (retain, nonatomic) UIImageView *favouriteImageView;
@property (retain, nonatomic) AWEIMEditedAssetModel *editedModel;
@property (nonatomic) unsigned long long cellStyle;
@property (copy, nonatomic) NSString *accessibilityContent;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (nonatomic) BOOL select;
@property (nonatomic) long long selectIndex;
@property (nonatomic) unsigned long long selectCount;
@property (nonatomic) long long maxVideoSize;
@property (retain, nonatomic) NSNumber *shouldReportMemory;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (weak, nonatomic) id<AWEIMAssetListCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *markEditedImageView;
@property (retain, nonatomic) UILabel *videoDurationLabel;

- (void)setupBaseView;
- (void)updateTouchAccessibilityContent:(id)a0 isSelect:(BOOL)a1;
- (void)configCoverImageView;
- (void)configGradientBgLayer;
- (void)configVideoDurationLabel;
- (void)configFavouriteImageView;
- (void)configMarkEditedImageView;
- (void)configLivePhotoTag;
- (void)configSelectView;
- (void)configAccessibilityContent;
- (void)setCellEnableSelect:(BOOL)a0;
- (void)p_cellDidLongPressed:(id)a0;
- (void)tapOnSelectImage;
- (void)livePhotoTagTaped;
- (void)showPopoverIfNeededInPercentageX:(double)a0;
- (void)setLivePhotoTagHidden:(BOOL)a0;
- (void)setLivePhotoTagOn:(BOOL)a0;
- (void)updateDurationLabeFont:(id)a0;
- (void)updateEditImageViewWidthAndHeightConstraint:(double)a0;
- (void)updateDurationLabeHeightConstraint:(double)a0;
- (void)setSelect:(BOOL)a0 selectIndex:(long long)a1 selectCount:(unsigned long long)a2 animated:(BOOL)a3 showMask:(BOOL)a4;
- (void)setRightTopSelectViewHidden:(BOOL)a0;
- (void)configWithPHAsset:(id)a0 assetSize:(struct CGSize { double x0; double x1; })a1 indexPath:(id)a2 cellStyle:(unsigned long long)a3 editedModel:(id)a4;
- (void)addLongPressGestureRecognizerIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
