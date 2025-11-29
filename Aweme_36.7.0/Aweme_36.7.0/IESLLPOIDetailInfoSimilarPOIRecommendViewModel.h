@class UIView, IESLLPOICollectObject, NSString, IESLLGradientView, UIImageView, LLDitoPageContext, IESLLPOIDetailSimilarPOIRecommendDataManager, IESLLPOIDetailStore, IESLLPOIDetailResponse, UICollectionView, UILabel;
@protocol IESLLPOIDetailInfoSimilarPOIRecommendDelegate;

@interface IESLLPOIDetailInfoSimilarPOIRecommendViewModel : IESLLPOIDetailInfoBaseViewModel <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) IESLLPOIDetailResponse *poiDetail;
@property (retain, nonatomic) IESLLPOIDetailStore *store;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) IESLLPOIDetailSimilarPOIRecommendDataManager *dataManager;
@property (retain, nonatomic) IESLLPOICollectObject *collectObject;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLLGradientView *topBannerView;
@property (retain, nonatomic) UILabel *topBannerTitleLabel;
@property (retain, nonatomic) UIImageView *topBannerTitleArrowView;
@property (retain, nonatomic) UILabel *suggestTitleLabel;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<IESLLPOIDetailInfoSimilarPOIRecommendDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;

- (void)setupViewModel;
- (void)favoriteItemChanged:(id)a0;
- (void)p_createSubviewsIfNeed;
- (void)p_refreshDataWithCompletion;
- (void)p_didTapOnCollect;
- (void)p_setCollectCount:(long long)a0;
- (id)topBannerTextFromCollectConfig;
- (void)didTapToClose;
- (long long)p_showRecommendPoiCount;
- (void)fillCollectButtonText:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
