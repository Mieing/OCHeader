@class IESLiveSearchListDataManager, NSString, UICollectionView, TabResponse, UIView, UILabel, IESLiveWebpLoadingView;
@protocol IESLiveSquareService, IESLiveContainerRouter, IESLiveReturnBackRouter;

@interface IESLiveSearchResultFeedViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) IESLiveWebpLoadingView *centerLoadingIndicator;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *blankView;
@property (retain, nonatomic) UILabel *blankTitle;
@property (retain, nonatomic) UIView *searchBlankView;
@property (retain, nonatomic) UIView *frequencyLoginView;
@property (retain, nonatomic) UIView *frequencyView;
@property (retain, nonatomic) UIView *netErrorView;
@property (retain, nonatomic) IESLiveSearchListDataManager *listDataManager;
@property (retain, nonatomic) id<IESLiveReturnBackRouter> returnRouter;
@property (retain, nonatomic) id<IESLiveContainerRouter> containerRouter;
@property (weak, nonatomic) id<IESLiveSquareService> squareService;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL fromDefaultWord;
@property (retain, nonatomic) TabResponse *tabModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideCollectionView;
- (id)initWithTabModel:(id)a0;
- (void)goLogin;
- (BOOL)isNewFeedDrawStyle;
- (void)configBlankView;
- (void)configSearchBlankView;
- (void)configFrequencyLoginView;
- (void)configFrequencyView;
- (void)configNetErrorView;
- (void)refreshSearchBlankViewContrains;
- (void)fetchDataWithKeyWord:(id)a0 enterMethod:(id)a1;
- (void)noNetRetry;
- (void)prepareForEnterLive:(id)a0 enterBlock:(id /* block */)a1;
- (void)showCenterLoading;
- (void)hideCenterLoading;
- (void)showSearchBlankView;
- (void)hideSearchBlankView;
- (void)fetchDataWithKeyWord:(id)a0 enterMethod:(id)a1 defaultWord:(BOOL)a2;
- (BOOL)haveResultData;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
