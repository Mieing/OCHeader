@class NSString;

@interface AWEMRSubscribeManageDetailViewController : AWEMRSubscribeManageBaseViewController <AWERouterViewControllerProtocol, AWEReferenceTrackable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *referString;

+ (Class)viewHolderClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (void)bindEvent;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;

@end
