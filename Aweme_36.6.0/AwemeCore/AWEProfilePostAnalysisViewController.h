@class NSString, AWEProfilePostAnalysisModel, AWETabContainerSectionController, UIView, IESSegmentedControl, DUXButton;

@interface AWEProfilePostAnalysisViewController : AWEBaseListViewController <AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate, AWEProfilePostAnalysisTabItemDelegate>

@property (weak, nonatomic) AWETabContainerSectionController *tabSectionController;
@property (retain, nonatomic) IESSegmentedControl *iesSegmentedControl;
@property (retain, nonatomic) UIView *segmentControlLineView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) AWEProfilePostAnalysisModel *panelModel;
@property (copy, nonatomic) id /* block */ updateScrollViewBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ contenViewReadyBlock;
@property (copy, nonatomic) id /* block */ lynxContentNeedRefreshBlock;
@property (copy, nonatomic) id /* block */ updateSheetEnableDrag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (double)heightForSegmentedControl;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (id)viewControllerForModel:(id)a0 index:(long long)a1;
- (double)heightForSectionController:(id)a0;
- (void)setupTabContentConfig:(id)a0;
- (id)segmentedControlForSectionController:(id)a0;
- (void)updateSegmentedControl:(id)a0 itemsArray:(id)a1;
- (void)tabContainerSectionController:(id)a0 didSelectItemAtIndex:(long long)a1 itemViewController:(id)a2 isByTap:(BOOL)a3;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (void)clickCloseButton;
- (unsigned long long)currentTabType;
- (void)willDismissSheet;
- (void)willShowSheet;
- (id)currentTabScrollView;
- (struct CGSize { double x0; double x1; })tabItemSize;
- (void)updateScrollView:(id)a0 itemModel:(id)a1;
- (void)lynxContentNeedRefresh;
- (void)lynxContentViewRenderReady;
- (void)scrollToDefaultTabTypeAndTrack;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)setupUI;
- (void)setupCollectionView:(id)a0;

@end
