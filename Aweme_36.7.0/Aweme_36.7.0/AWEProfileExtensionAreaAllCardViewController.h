@class NSString, UICollectionView, AWETabContainerSectionController, AWEPageContext, IESSegmentedControl, UIButton;
@protocol AWEProfileContextCommonProtocol;

@interface AWEProfileExtensionAreaAllCardViewController : AWEBaseListViewController <AWETabContainerSectionControllerDataSource, AWETabContainerSectionControllerDelegate, AWERouterViewControllerProtocol, AWEProfileExtensionAreaAllCardContainerProtocol>

@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) AWETabContainerSectionController *tabSectionController;
@property (retain, nonatomic) IESSegmentedControl *iesSegmentedControl;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) double segmentMargin;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) AWEPageContext<AWEProfileContextCommonProtocol> *profileContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
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
- (void)tabContainerSectionController:(id)a0 didScroll:(id)a1;
- (BOOL)segmentedControl:(id)a0 shouldSelectIndex:(long long)a1 fromIndex:(long long)a2;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (BOOL)lazyAccessItemViewControllerForTabContent;
- (void)backBtnClicked;
- (void)configFakeNavigationBar;
- (void)checkEntranceType:(id)a0 entranceSubType:(id)a1;
- (void)cancelBtnClicked;
- (id)selectedController;
- (void)backWithController:(id)a0;
- (void)backPreviousPage;
- (void)transitionWithController:(id)a0;
- (void)refreshEditingState:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)loadView;
- (void)setupCollectionView:(id)a0;

@end
