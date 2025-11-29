@class NSString, UIImageView, IESECGoodsFeedCompareDealsBarView, IESECURLModel;

@interface IESEInternalFeedCarouseCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECGoodsFeedCompareDealsBarView *compareDealsBar;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (retain, nonatomic) UIImageView *goodImageView;
@property (retain, nonatomic) UIImageView *blurredContainerView;
@property (retain, nonatomic) UIImageView *promotionImageView;
@property (retain, nonatomic) IESECURLModel *promotionImageModel;

- (void)configUI;
- (void)bindURLModel:(id)a0;
- (void)bindActivityURLModel:(id)a0;
- (void)unbindActivityURLModel;
- (void)steupCompareDealsBar:(long long)a0;
- (void)updateCompareDealsBar:(id)a0 index:(long long)a1 actionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
