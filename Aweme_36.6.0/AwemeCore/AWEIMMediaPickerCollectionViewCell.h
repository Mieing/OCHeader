@class PHAsset, UIImageView;

@interface AWEIMMediaPickerCollectionViewCell : UICollectionViewCell

@property (nonatomic) int requestID;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) UIImageView *assetImageView;

- (void)createComponents;
- (void)renderWithModel:(id)a0;
- (id)accessibilityDataFormatter;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutComponents;

@end
