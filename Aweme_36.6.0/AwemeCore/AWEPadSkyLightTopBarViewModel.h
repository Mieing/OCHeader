@class AWEPadSkyLightCapsuleView, AWEPadSkyLightTopBarViewController, IGListAdapter, AWEBaseListAdapterDataSource, NSString, AWEPadSkyLightListDataController;
@protocol AWESkyLightContainerViewModelProtocol, AWESkyLightContainerConfigProtocol;

@interface AWEPadSkyLightTopBarViewModel : NSObject <UIGestureRecognizerDelegate, AWEBaseListViewControllerDataSource, UIScrollViewDelegate, AWESkyLightTopBarViewModelProtocol>

@property (retain, nonatomic) id<AWESkyLightContainerConfigProtocol> config;
@property (retain, nonatomic) AWEPadSkyLightTopBarViewController *topBarView;
@property (retain, nonatomic) AWEPadSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPadSkyLightListDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (nonatomic) BOOL isSkyLightStatusChanged;
@property (copy, nonatomic) id /* block */ commitAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESkyLightContainerViewModelProtocol> containerViewModel;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)sectionViewModels;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)sectionControllerClassArray;
- (void)bindListAdapter:(id)a0 dataSource:(id)a1;
- (void)skyLightSatusChanged:(BOOL)a0;
- (void)updateCapsuleText;
- (void)setupSkyLightListHandler;
- (void)skyLightExpandedForce:(BOOL)a0;
- (void)capsuleViewDidTaped;
- (void)updateNewSectionWithOldSectionData:(BOOL)a0 oldUpdateError:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (double)topBarHeight;
- (id)initWithConfig:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
