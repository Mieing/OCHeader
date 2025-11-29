@class DVEEffectValue, UIView;

@interface DVEPickerBaseCell : UICollectionViewCell

@property (nonatomic) BOOL stickerSelected;
@property (retain, nonatomic) UIView *downloadView;
@property (retain, nonatomic) UIView *downloadingView;
@property (retain, nonatomic) UIView *downloadFailView;
@property (retain, nonatomic) DVEEffectValue *model;
@property (nonatomic) double downloadProgress;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStickerIconImage;
- (void)updateShowStatus;
- (void).cxx_destruct;
- (id)init;

@end
