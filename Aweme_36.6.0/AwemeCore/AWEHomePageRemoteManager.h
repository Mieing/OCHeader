@class NSString, AWEHomePageRemotePanel, NSDictionary, AWEHomePageRemoteModel, AWEHomePageRemoteHandleBusinessManager, AWEHomePageRemoteControllersModel;
@protocol AWEHomePageRemotePanelLifeCycle;

@interface AWEHomePageRemoteManager : NSObject <AWEAlertProtocol, AWEUserMessage, AWEHomePageRemotePanelLifeCycle, AWEHomePageRemotePanelProtocol>

@property (weak, nonatomic) id<AWEHomePageRemotePanelLifeCycle> delegate;
@property (retain, nonatomic) AWEHomePageRemotePanel *remotePanel;
@property (retain, nonatomic) AWEHomePageRemoteModel *remoteModel;
@property (retain, nonatomic) AWEHomePageRemoteHandleBusinessManager *businessManager;
@property (retain, nonatomic) AWEHomePageRemoteControllersModel *moduleControllersModel;
@property (copy, nonatomic) NSDictionary *remoteControllerMap;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) BOOL isSettingsDataReady;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousModuleType;
@property (copy, nonatomic) NSString *previousBusinessType;
@property (copy, nonatomic) NSString *previousBusinessId;
@property (nonatomic) double totalStayTime;
@property (nonatomic) double lastEnterTime;
@property (readonly, nonatomic) BOOL isPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerControllerWithModuleType;
+ (id)registerControllerWithBusinessType;
+ (id)supportModuleType;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)panelWillShow;
- (void)panelDidShow;
- (void)addNotifications;
- (void)updatePanelThemeStyle:(long long)a0;
- (id)moduleControllerArray;
- (void)rootVCWillAppear;
- (void)businessRemoveAlertIfNeed;
- (id)getHomePageRemoteTrackContext;
- (void)panelPositiveCloseWithAnimateType:(long long)a0;
- (id)homePageRemoteIdentity;
- (id)loadRemoteDataAndRegisterController:(id)a0 moduleControllerArray:(id)a1 itemControllersDictionary:(id)a2;
- (void)loadRemoteUIIfNeed;
- (void)p_removeAlertIfNeed;
- (void)dismissWithReason:(long long)a0 withAnimateType:(long long)a1;
- (void)p_addAlertIfNeed;
- (void)loadRemoteDataIfNeed;
- (void)reloadRemoteModuleController;
- (void)panelDidDismissWithReason:(long long)a0;
- (long long)homePageRemoteCurrentThemeStyle;
- (id)createControllerWithModuleType:(id)a0 withItemModel:(id)a1;
- (void)panelWillDismissWithReason:(long long)a0;
- (double)calculateCollectionViewHeightWithModuleWidth:(double)a0;
- (void)prepareShowPanel;
- (BOOL)canShowPanel;
- (void)showPanelOnView:(id)a0 withBottomPadding:(double)a1 withShowAnimateType:(long long)a2 withDismissAnimateType:(long long)a3 withEnterMethod:(id)a4;
- (id)homePageRemoteItemControllerWithBusinessId:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithDelegate:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)removeNotifications;
- (void)appWillEnterForeground:(id)a0;

@end
