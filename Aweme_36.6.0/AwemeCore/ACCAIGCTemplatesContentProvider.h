@class ACCAIGCCategoryModel, ACCAIGCLoraProfileModel, NSString, NSMutableSet, AWEVideoPublishViewModel, NSMutableArray, UIViewController;
@protocol ACCAIGCWaterfallVCProtocol;

@interface ACCAIGCTemplatesContentProvider : NSObject <ACCAIGCTemplateTabContentProviderProtocol>

@property (retain, nonatomic) NSMutableSet *needRemoveIndexs;
@property (retain, nonatomic) NSMutableArray *showModels;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (nonatomic) BOOL firstUploadShowHeaderView;
@property (weak, nonatomic) UIViewController<ACCAIGCWaterfallVCProtocol> *viewController;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) BOOL isLandingCategory;
@property (retain, nonatomic) ACCAIGCCategoryModel *categoryModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ currentVCVisibleBlock;
@property (copy, nonatomic) id /* block */ creatAIGCBlock;
@property (copy, nonatomic) id /* block */ takeSameBlock;
@property (nonatomic) BOOL hideCreateAIGC;
@property (copy, nonatomic) id /* block */ emptyTipClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)trackEnterAIGCCreateTab;
- (void)handleResponsIsMore:(BOOL)a0 Time:(double)a1 Error:(id)a2 Response:(id)a3 iscache:(BOOL)a4 completion:(id /* block */)a5;
- (void)trackAIGCActivityCardShow;
- (void)trackEnterAIGCCardCompleteShow:(BOOL)a0 index:(long long)a1;
- (void)cutSameButtonFlow:(id)a0 fromType:(id)a1 index:(long long)a2;
- (BOOL)enableMyTabHeaderManageLora;
- (void)afterLoraRequestReloadData:(BOOL)a0 block:(id /* block */)a1;
- (void)resetProfileModel;
- (void)trackManagerLoraInfoPageShowOnce;
- (id)trackAIGCCommonInfo;
- (void)handleOnViewDidAppear;
- (void)loadContentDataIsMore:(BOOL)a0 pageCount:(long long)a1 completion:(id /* block */)a2;
- (void)registerCellForcollectionView:(id)a0;
- (void)updateLoraInfoIfNeed:(id /* block */)a0 force:(BOOL)a1;
- (void)updateHeadViewDetailInfo:(id)a0;
- (void)trackDeleteModelInfo:(id)a0;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (id)collectionView;

@end
