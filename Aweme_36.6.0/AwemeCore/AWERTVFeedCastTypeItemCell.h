@class UIStackView, AWERTVFeedCastTypeItemModel, LOTAnimationView, UILabel, BDImageView;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface AWERTVFeedCastTypeItemCell : UICollectionViewCell

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *titleContainerView;
@property (retain, nonatomic) AWERTVFeedCastTypeItemModel *model;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:(id)a0;
- (void).cxx_destruct;

@end
