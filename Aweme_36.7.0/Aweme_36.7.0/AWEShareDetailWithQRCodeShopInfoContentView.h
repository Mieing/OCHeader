@class UIStackView, UIImageView, AWEShopShareCardInfoModel, UILabel, UIView;

@interface AWEShareDetailWithQRCodeShopInfoContentView : AWEShareDetailWithQRCodeBaseContentView {
    AWEShopShareCardInfoModel *_shopShareInfo;
}

@property (retain, nonatomic) UIView *multiProductsContainer;
@property (retain, nonatomic) UIImageView *topProductImage;
@property (retain, nonatomic) UIImageView *bottom1ProductImage;
@property (retain, nonatomic) UIImageView *bottom2ProductImage;
@property (retain, nonatomic) UIImageView *bottom3ProductImage;
@property (retain, nonatomic) UIImageView *singleProductImage;
@property (retain, nonatomic) UIView *shopInfoContainer;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UIStackView *shopReputationView;
@property (retain, nonatomic) UIView *tipsContainer;
@property (retain, nonatomic) UIImageView *emptyProductBackground;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (void)updateSubviewsForGenerateImage;
- (id)generateTipsContainer:(BOOL)a0 needMagnify:(BOOL)a1;
- (void)generateShopReputationViewContent;
- (id)initWithShopShareInfo:(id)a0;
- (struct CGSize { double x0; double x1; })contentViewSizeInImage;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (void)setUpSubviews;
- (void)updateData;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
