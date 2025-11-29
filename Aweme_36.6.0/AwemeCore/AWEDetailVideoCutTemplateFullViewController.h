@class NSString, AWEDetailServiceProvider;

@interface AWEDetailVideoCutTemplateFullViewController : AWEDetailFullViewController <AWEDetailVideoCutTemplateEnterAwemeDetailServiceDelegate> {
    AWEDetailServiceProvider *_serviceProvider;
}

@property (nonatomic) BOOL hasEnteredAwemeDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setupInjectServiceOnInit;
- (void)setupUIOnViewDidLoad;
- (void)handleDetailInfoFetchStateChange;
- (BOOL)needAmendEmptyAwemeListTip;
- (void)didEnterAwemeDetailWithIndexPath:(id)a0;
- (void)p_updateActionButtonTitle;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
