@class UIButton;

@interface AWEIMPhotoPreviewNewEditorCell : AWEIMAssetListCollectionViewCell

@property (retain, nonatomic) UIButton *deleteButton;

- (void)configWithPHAsset:(id)a0 assetSize:(struct CGSize { double x0; double x1; })a1 indexPath:(id)a2 cellStyle:(unsigned long long)a3 editedModel:(id)a4;
- (void)showSelectedBorder:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
