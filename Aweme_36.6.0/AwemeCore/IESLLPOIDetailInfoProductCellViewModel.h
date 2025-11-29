@class UIView, NSString, LLDitoPageContext, UIButton, IESLLPOIHotelScrollTailView, UICollectionView, IESLLPOIDetailStore, IESLLPOIProductInfoModel, UILabel;

@interface IESLLPOIDetailInfoProductCellViewModel : IESLLPOIDetailInfoBaseViewModel <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UICollectionView *cardPanel;
@property (retain, nonatomic) IESLLPOIProductInfoModel *productInfo;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) IESLLPOIDetailStore *store;
@property (retain, nonatomic) IESLLPOIHotelScrollTailView *horizonScrollTailView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;
+ (BOOL)supportProduct:(id)a0;

- (id)awe_staytimeKey;
- (void)poi_onAppear;
- (void)poi_onDisappear;
- (void)creatSubviewsIfNeed;
- (unsigned long long)productsDisplayStyle;
- (struct CGSize { double x0; double x1; })p_cellSize;
- (id)replaceEnterFromAndEnterMethodWithUrl:(id)a0 enterMethod:(id)a1;
- (void)openUrl:(id)a0;
- (void)moreButtonTapAction;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (Class)cellClass;
- (id)cellIdentifier;
- (void)updateWithModel:(id)a0;
- (unsigned long long)productsCount;

@end
