@class UIView, NSString, UIImageView, WCImageView, MMAssetSelectCheckButton, WCMediaItem, UILabel, MMUILabel;
@protocol MMAssetPickerControllerFinderAssetDelegate, WCAlbumPickerCollectionCellViewDelegate;

@interface WCAlbumPickerCollectionCellView : UICollectionViewCell <WCImageViewDelegate, WCAlbumPickerExt>

@property (retain, nonatomic) WCImageView *thumbImageView;
@property (retain, nonatomic) UIView *selectionBgView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *sizeLabel;
@property (retain, nonatomic) UIView *disabledMaskView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *lengthLabel;
@property (retain, nonatomic) UIView *videoLogoView;
@property (retain, nonatomic) UIView *editImageView;
@property (retain, nonatomic) UIImageView *privateImageView;
@property (retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) double imgHeight;
@property (weak, nonatomic) id<WCAlbumPickerCollectionCellViewDelegate> delegate;
@property (weak, nonatomic) id<MMAssetPickerControllerFinderAssetDelegate> finderDelegate;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (nonatomic) BOOL isInPreview;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)commInit;
- (void)updatePrivacyIcon;
- (void)prepareForReuse;
- (void)updateAssetInfo;
- (double)tagLogoLBMargin;
- (void)showTagBGView;
- (void)showVideoLogoViewWithTime:(id)a0;
- (void)showEditedLogoView;
- (void)showAseetNameAndSize;
- (void)updateEnabledState;
- (BOOL)isCurrentAssetEnable;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)a0;
- (BOOL)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)showedSelectedMarkWithIndex:(long long)a0 animated:(BOOL)a1;
- (void)toggleSelection;
- (void)updateBgMaskView;
- (id)timeStringBySeconds:(double)a0;
- (void)onWCAlbumPickerControllerChangeSelectInfo:(id)a0 index:(long long)a1;
- (void)onWCAlbumPickerControllerChangeSelectInfosOrder;
- (void)onWCAlbumPickerControllerFinishEditMedia:(id)a0;
- (void)onWCAlbumPickerControllerUpdateAllAssetViewBorderWithMedia:(id)a0;
- (void).cxx_destruct;

@end
