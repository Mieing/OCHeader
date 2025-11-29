@class AWEDiskExtremelyCleanView, NSString;

@interface AWEDouyinGlobalDiskManagerViewController : AWEDiskManageBaseViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEDiskExtremelyCleanView *extremelyCleanView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupCleanViewModel;
- (void)initExtremelyCleanView;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)createUI;

@end
