@class UILabel;

@interface ACCFunctionStickerCollectionViewCell : ACCBaseStickerCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

- (void)configCellWithInfoStickerModel:(id)a0 compeletion:(id /* block */)a1;
- (void)configCellWithEffectModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (double)imageViewWidth;

@end
