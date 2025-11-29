@class IESECGoodsDetailImagesMetaModel, IESECGoodsDetailImagesDataModel, UIView, IESECButton, IESECUIImageView;

@interface IESECGoodsDetailImagesCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) IESECGoodsDetailImagesDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailImagesMetaModel *metaModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECButton *moreInfoButton;
@property (retain, nonatomic) UIView *moreInfoBGView;

- (void)clickImagePreview;
- (void)updateWithViewModel:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
