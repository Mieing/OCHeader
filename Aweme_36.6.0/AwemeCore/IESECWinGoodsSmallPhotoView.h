@class UIImageView, NSObject, IESECGoodsPriceLabel;
@protocol IESECWinGoodsSmallPhotoTap;

@interface IESECWinGoodsSmallPhotoView : UIView

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECGoodsPriceLabel *goodsPriceLabel;
@property (retain, nonatomic) NSObject *viewModel;
@property (weak, nonatomic) id<IESECWinGoodsSmallPhotoTap> tapPhotoDelegate;

- (void)tapPhotoView;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
