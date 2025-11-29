@class IESIMLivePhotoTagView, PHAsset, UILongPressGestureRecognizer, UIImageView, UIButton, CAGradientLayer, UILabel, AWEIMSelectableImageView;
@protocol AWEIMPhotoPickerCollectionViewCellDelegate;

@interface AWEIMPhotoPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL cellUsedInQuickPicker;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) struct CGSize { double width; double height; } assetSize;
@property (nonatomic) int requestID;
@property (weak, nonatomic) id<AWEIMPhotoPickerCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEIMSelectableImageView *assetImageView;
@property (retain, nonatomic) UIImageView *markEditedImageView;
@property (retain, nonatomic) IESIMLivePhotoTagView *livePhotoTag;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *favouriteImageView;
@property (nonatomic) BOOL newStyle;
@property (copy, nonatomic) id /* block */ longPressAction;

- (void)setHintLabelText:(id)a0;
- (void)addCornerRadius:(double)a0 corner:(unsigned long long)a1;
- (void)p_cellDidLongPressed:(id)a0;
- (void)livePhotoTagTaped;
- (void)showPopoverIfNeededInPercentageX:(double)a0;
- (void)configWithPHAsset:(id)a0 indexPath:(id)a1 editedModel:(id)a2;
- (void)addGradientBgLayerForHeight:(double)a0;
- (void)removeCornerRadius;
- (void)removeGradientBgLayer;
- (void)setPlaceHolderViewHiddenIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end
