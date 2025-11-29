@class NSString, AWETabContainerSectionController, AWEProfileBaseHeaderSectionController, UIViewController;
@protocol AWEUserProfileTabVCDelegate, AWEProfileTabContainerProtocol;

@interface AWEProfileBaseContainerViewController : AWEBaseListViewController <UICollectionViewDelegate, AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate, AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) AWETabContainerSectionController *tabContainerSectionController;
@property (weak, nonatomic) AWEProfileBaseHeaderSectionController *headerSectionController;
@property (nonatomic) BOOL showTabBubble;
@property (copy, nonatomic) NSString *tabBubbleText;
@property (nonatomic) long long tabBubbleIndex;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) BOOL isInUserHomePage;
@property (nonatomic) BOOL isInLandingPage;
@property (nonatomic) BOOL rightFixedAreaUseContainerDataSource;
@property (nonatomic) BOOL needHeaderCellScrollable;
@property (nonatomic) BOOL isNeedShowCellBackgroundStatus;
@property (nonatomic) BOOL isNewFullScreenStyle;
@property (weak, nonatomic) UIViewController<AWEProfileTabContainerProtocol> *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;
+ (Class)collectionViewClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)scrollToIndex:(unsigned long long)a0;
- (double)heightForSegmentedControl;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)viewControllerForModel:(id)a0 index:(long long)a1;
- (double)heightForSectionController:(id)a0;
- (void)setupTabContentConfig:(id)a0;
- (void)tabContainerSectionController:(id)a0 didSelectItemAtIndex:(long long)a1 itemViewController:(id)a2 isByTap:(BOOL)a3;
- (void)tabContainerSectionController:(id)a0 didScroll:(id)a1;
- (id)currentTabVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentFrameAtIndex:(unsigned long long)a0;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (BOOL)enableStickCollectionView;
- (id)aAWEPadBizUIAdapter;
- (void)reloadRightFixedAreaWithItemVC:(id)a0;
- (BOOL)shouldHideProfileBaseHeaderSection;
- (double)heightForCustomSegmented;
- (void)updateWithTabItems:(id)a0 landingIndex:(long long)a1;
- (void)updateBubble:(BOOL)a0 bubbleText:(id)a1 index:(long long)a2;
- (void)reloadData;
- (unsigned long long)currentIndex;
- (void).cxx_destruct;
- (id)contentView;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)headerHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)refreshData;
- (void)setupCollectionView:(id)a0;

@end
