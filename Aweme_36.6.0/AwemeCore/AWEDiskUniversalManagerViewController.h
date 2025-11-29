@class NSString, AWEDiskUniversalCleanView;

@interface AWEDiskUniversalManagerViewController : AWEDiskManageBaseViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEDiskUniversalCleanView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupCleanViewModel;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)setupViews;

@end
