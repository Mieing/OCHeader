@class AWEListDataController, AWEBinding, NSString, AWEAwemeModel, AWEMixVideoModel, AWEProfileMixDataManager, AWEUserModel;
@protocol AWEDiscoverDPlayletProfileListDataControllerProtocol;

@interface AWEPostWorkHorizontalSectionManager : AWEUserWorkSectionManager <AWEPostWorkHorizontalSectionManagerProtocol>

@property (nonatomic) BOOL currentUserIsBlocked;
@property (retain, nonatomic) AWEUserModel *currentUser;
@property (nonatomic) unsigned long long sectionState;
@property (nonatomic) unsigned long long updatePrivateMixState;
@property (retain, nonatomic) AWEAwemeModel *mixManageModel;
@property (retain, nonatomic) AWEProfileMixDataManager *mixDataManager;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *playletDataController;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *seriesContentSubTypeDataController;
@property (copy, nonatomic) id /* block */ waitRecommendModelReadyBlock;
@property (retain, nonatomic) AWEMixVideoModel *removedFrontMixVideoModel;
@property (retain, nonatomic) AWEMixVideoModel *removedTargetMixVideoModel;
@property (copy, nonatomic) id /* block */ waitMixReadyCheckBlock;
@property (nonatomic) BOOL waitRecommendModelReadyState;
@property (retain, nonatomic) AWEBinding *recommendModelBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (id)commonParams;
- (id)cellConfig;
- (id)tabHelper;
- (void)refreshMixData;
- (id)privateEntrance;
- (id)recommendSection;
- (BOOL)mixDataValid;
- (id)mixDataSource;
- (void)updatePrivateMixEntranceIfNeeded:(BOOL)a0;
- (void)fetchDataCompletion:(id /* block */)a0;
- (void)backToPersonalPageNotification:(id)a0;
- (BOOL)checkUserIsBlocked;
- (void)removeRecommendMixModel;
- (void)updateViewModelData;
- (void)updatePrivateMixEntranceIfNeeded;
- (BOOL)checkCanLoadMixData;
- (void)recommendModelReady;
- (void)checkConsumeWaitMixReadyCheckBlock;
- (id)mixDataManagerFilterPlayletDataWithArray:(id)a0;
- (void)deletePlayletTypeFilmIfNeed:(id)a0;
- (void)updateRecommendModel;
- (void)insertRecommendMixVideoModel;
- (void).cxx_destruct;
- (void)removeAll;
- (id)viewModel;
- (void)dealloc;
- (id)dataController;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
