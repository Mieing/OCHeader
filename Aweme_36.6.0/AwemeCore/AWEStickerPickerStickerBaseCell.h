@class UIColor;
@protocol ACCGenericEffectModel, AWEStickerPickerStickerCellAppearanceDelegate;

@interface AWEStickerPickerStickerBaseCell : UICollectionViewCell

@property (nonatomic) BOOL stickerSelected;
@property (nonatomic) BOOL enableTitleAnimationDegrade;
@property (retain, nonatomic) id<ACCGenericEffectModel> sticker;
@property (nonatomic) BOOL skipDownLoad;
@property (nonatomic) BOOL stickerIconFinishLoad;
@property (nonatomic) double stickerIconLoadTime;
@property (nonatomic) unsigned long long stickerStatus;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (weak, nonatomic) id<AWEStickerPickerStickerCellAppearanceDelegate> delegate;

- (void)updateUIConfig:(id)a0;
- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStickerIconImage;
- (void).cxx_destruct;

@end
