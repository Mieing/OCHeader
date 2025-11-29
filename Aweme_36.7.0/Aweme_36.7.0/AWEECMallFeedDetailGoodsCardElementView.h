@class UIPageControl, NSString, UICollectionView, AWEAwemeModel, NSDictionary, UITapGestureRecognizer;

@interface AWEECMallFeedDetailGoodsCardElementView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEMallFeedDetailGoodsElementProtocol>

@property (retain, nonatomic) UICollectionView *cardsView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void)__handleTapGesture:(id)a0;
- (void)tapGoodsCardWithPromotionID:(id)a0;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
