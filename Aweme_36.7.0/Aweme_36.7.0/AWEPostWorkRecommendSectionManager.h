@class AWEUserWorkCellViewModelPool, AWEProfileRecommendDetailContainerViewController, AWEBinding, NSString;

@interface AWEPostWorkRecommendSectionManager : AWEUserWorkSectionManager <AWEPostWorkRecommendSectionManagerProtocol>

@property (retain, nonatomic) AWEBinding *recommendModelBinding;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *recommendViewModelPool;
@property (weak, nonatomic) AWEProfileRecommendDetailContainerViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)privateEntrance;
- (void)handleDiggedNotification:(id)a0;
- (id)horizontalSection;
- (void)updateViewModelData;
- (BOOL)needWaitPostRecommendModelReady;
- (BOOL)checkRecommendSwitchOn;
- (void)trackRecommendSectionShowWithAwemeModel:(id)a0;
- (void)trackRecommendCardEvent:(id)a0 atIndexPath:(id)a1 awemeModel:(id)a2;
- (void)handlePostWorkSelectWithIndexPath:(id)a0 awemeModel:(id)a1;
- (id)recommendCardCommonParamsWithAweme:(id)a0 groupID:(id)a1;
- (void).cxx_destruct;
- (id)viewController;
- (id)viewModel;
- (void)dealloc;
- (id)dataController;
- (void)containerViewDidLoad;

@end
