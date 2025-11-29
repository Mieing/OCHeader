@class IESECGoodsDetailGuessULikeViewModel, UIScrollView, UIView;
@protocol IESECMallRecommendViewProtocol;

@interface IESECGoodsDetailGuessULikeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECGoodsDetailGuessULikeViewModel *viewModel;
@property (weak, nonatomic) UIScrollView *recommendScrollView;
@property (retain, nonatomic) UIView<IESECMallRecommendViewProtocol> *recommendView;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
