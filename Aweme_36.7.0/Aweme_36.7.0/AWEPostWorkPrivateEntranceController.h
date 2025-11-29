@class NSString, AWEBinding;

@interface AWEPostWorkPrivateEntranceController : AWEPostWorkBaseController <AWEPostWorkPrivateEntranceProtocol>

@property (retain, nonatomic) AWEBinding *privateEntranceBinding;
@property (retain, nonatomic) AWEBinding *privateNumBinding;
@property (nonatomic) BOOL canTrackPrivateMixEntranceShow;
@property (nonatomic) BOOL setupPrivateNumBinded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (id)loadPrivateLocalCacheDatas;
- (void)addPrivateModelToMixDataManagerIfNeed:(BOOL)a0 dataSource:(id)a1;
- (void)trackPrivateMixEntranceShowIfNeed;
- (void)rebindPrivateModel;
- (void)updatePrivateMix:(BOOL)a0;
- (void)setupPrivateNumBindIfNeed;
- (void).cxx_destruct;
- (id)viewModel;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (id)dataController;
- (void)containerViewDidLoad;

@end
