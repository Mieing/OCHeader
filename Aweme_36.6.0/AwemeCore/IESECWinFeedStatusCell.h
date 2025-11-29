@class IESECWinContainerEmptyView, IESECWinFeedStatusObject, UIImageView, IESECWinContainerErrorView, UILabel, IESECFullLoadingView, UIView;

@interface IESECWinFeedStatusCell : UICollectionViewCell {
    IESECWinFeedStatusObject *_object;
}

@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIImageView *headerLoadingView;
@property (retain, nonatomic) UILabel *emptyDetailLabel;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) IESECWinContainerErrorView *errorView;
@property (retain, nonatomic) IESECWinContainerEmptyView *emptyCategoryView;
@property (retain, nonatomic) IESECFullLoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (copy, nonatomic) id /* block */ checkAllGoodsBlock;

- (void)dismissLoading;
- (void)updateUIWithStatus:(id)a0;
- (void)configEmptyView;
- (void)configTabLoading;
- (void)configTabError;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoading;

@end
