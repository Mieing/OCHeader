@class AWEPadSkyLightCapsuleView, NSString, IGListAdapter, AWEBaseListAdapterDataSource, AWEPadSkyLightListDataController, UIViewController;
@protocol AWESkyLightContainerViewModelProtocol, AWESkyLightContainerConfigProtocol;

@interface AWEPadChildSkyLightTopBarViewModel : NSObject <UIGestureRecognizerDelegate, AWEBaseListViewControllerDataSource, UIScrollViewDelegate, AWEUserMessage, AWESkyLightTopBarViewModelProtocol>

@property (retain, nonatomic) id<AWESkyLightContainerConfigProtocol> config;
@property (retain, nonatomic) UIViewController *topBarView;
@property (retain, nonatomic) AWEPadSkyLightCapsuleView *capsuleView;
@property (retain, nonatomic) AWEPadSkyLightListDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (copy, nonatomic) id /* block */ commitAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESkyLightContainerViewModelProtocol> containerViewModel;

- (id)referString;
- (void)didFinishLoginWithUid:(id)a0;
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
- (void).cxx_destruct;
- (double)topBarHeight;
- (id)initWithConfig:(id)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
