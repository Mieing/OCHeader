@class AWEListDataController, NSString, AWEAwemeModel, AWEProfileMixDataManager, AWEUserModel;
@protocol AWEDiscoverDPlayletProfileListDataControllerProtocol;

@interface AWEPostWorkHorizontalSectionManager : AWEUserWorkSectionManager <AWEPostWorkHorizontalSectionManagerProtocol>

@property (retain, nonatomic) AWEUserModel *currentUser;
@property (nonatomic) unsigned long long sectionState;
@property (nonatomic) unsigned long long updatePrivateMixState;
@property (retain, nonatomic) AWEAwemeModel *mixManageModel;
@property (retain, nonatomic) AWEProfileMixDataManager *mixDataManager;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *playletDataController;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *seriesContentSubTypeDataController;
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
- (BOOL)mixDataValid;
- (void)updatePrivateMixEntranceIfNeeded:(BOOL)a0;
- (void)backToPersonalPageNotification:(id)a0;
- (BOOL)checkUserIsBlocked;
- (void)updateViewModelData;
- (void)updatePrivateMixEntranceIfNeeded;
- (BOOL)checkCanLoadMixData;
- (id)mixDataManagerFilterPlayletDataWithArray:(id)a0;
- (void)deletePlayletTypeFilmIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)viewModel;
- (void)dealloc;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
