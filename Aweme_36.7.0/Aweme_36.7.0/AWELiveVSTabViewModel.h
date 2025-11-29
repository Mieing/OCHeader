@class NSString, AWEBaseListAdapterDataSource, IGListAdapter, AWEListDataController;

@interface AWELiveVSTabViewModel : NSObject <AWEBaseListViewControllerDataSource>

@property (retain, nonatomic) AWEListDataController *dataController;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) AWEBaseListAdapterDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionViewModels;
- (id)sectionControllerClassArray;
- (void)viewDidDisAppear;
- (id)initWithDataController:(id)a0;
- (void)trackFormatCenterPageShow;
- (void)bindListAdapter:(id)a0 dataSource:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
