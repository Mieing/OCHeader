@class UIColor, IESEffectModel;

@interface AWETextTemplateBaseCell : UICollectionViewCell

@property (retain, nonatomic) IESEffectModel *sticker;
@property (readonly, nonatomic) BOOL stickerSelected;
@property (nonatomic) unsigned long long stickerStatus;
@property (retain, nonatomic) UIColor *selectedBorderColor;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
