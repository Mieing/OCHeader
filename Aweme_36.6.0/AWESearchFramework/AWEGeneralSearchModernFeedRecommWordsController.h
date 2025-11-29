@class UIView, NSString, AWEGeneralSearchModel, TTHttpTask, NSDictionary, CAGradientLayer, AWEWordSourceModel, AWESearchAccessibleCollectionView, UILabel;

@interface AWEGeneralSearchModernFeedRecommWordsController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchVideoRecommWordsCollectionViewLayoutDelegate, AWESearchVideoRecommendedWordViewProtocol>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchAccessibleCollectionView *collectionView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *pureMaskView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEWordSourceModel *recommWordsModel;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *presearchID;
@property (retain, nonatomic) NSString *lastSsearchGroupId;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) TTHttpTask *fetchRecommWordsTask;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEGeneralSearchModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildViews;
- (void)didStartShowing;
- (double)recommWordsLayout:(id)a0 widthForItemAtIndexPath:(id)a1;
- (long long)numberOfRowsForRecommWordsLayout:(id)a0;
- (double)contentHeightForRecommWordsLayout:(id)a0;
- (id)buildRecommWordsModelWithJSONObject:(id)a0 awemeModel:(id)a1;
- (void)fetchVideoRecommWordsWithKeyword:(id)a0 awemeModel:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)modelAtIndex:(long long)a0;
- (void)updateWithModel:(id)a0;

@end
