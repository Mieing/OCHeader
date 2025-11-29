@class NSString, UICollectionView, WCFinderNativeDramaHalfScreenViewModel, UIView, WCFinderSteramProfileBarView, UICollectionViewDiffableDataSource;
@protocol WCFinderNativeDramaEpisodeListProtocol;

@interface WCFinderNativeDramaHalfScreenViewController : MMPageSheetBaseViewController <UICollectionViewDelegate, WCFinderHalfScreenProtocol, WCFinderNativeDramaHalfScreenViewModelDelegate, WCFinderNativeDramaDetailHeaderSectionDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) WCFinderSteramProfileBarView *lineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double currentTranslationY;
@property (retain, nonatomic) WCFinderNativeDramaHalfScreenViewModel *viewModel;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (weak, nonatomic) id<WCFinderNativeDramaEpisodeListProtocol> parentList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setupUI;
- (id)_collectionViewLayout;
- (void)_setupDataSource;
- (void)_setupPageSheetConfig;
- (void)_handleScrollViewPanGesture:(id)a0;
- (void)_didSelectRangeItem:(id)a0;
- (void)_didSelectEpisodeItem:(id)a0;
- (void)_showComplaintActionSheet;
- (void)_updateMoveDistance:(double)a0;
- (id)_sectionAtIndex:(long long)a0;
- (id)_itemAtIndexPath:(id)a0;
- (id)_findPreviewNavigationVC;
- (void)pageSheetWillDisappear;
- (double)pageSheetContentHeight;
- (double)_pageSheetContentHeight;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)getHalfContainerView;
- (void)viewModelDidRefreshData:(id)a0;
- (void)nativeDramaDetailHeaderSectionOnTapMoreButton;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)_setupPageReport;
- (void).cxx_destruct;

@end
