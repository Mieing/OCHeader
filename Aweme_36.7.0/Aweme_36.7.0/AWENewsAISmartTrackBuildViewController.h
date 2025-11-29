@class AWENewsAISmartTrackBuildViewModel, AWENewsAISmartTrackBuildInputView, NSString;

@interface AWENewsAISmartTrackBuildViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWENewsAISmartTrackBuildViewModel *viewModel;
@property (retain, nonatomic) AWENewsAISmartTrackBuildInputView *inputView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_addObserver;
- (void)p_configUI;
- (void)p_makeConstraint;
- (void)p_configViewModel;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
