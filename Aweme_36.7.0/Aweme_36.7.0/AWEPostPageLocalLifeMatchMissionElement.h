@class AWEStudioLocalLifeMissionRequestModel, NSArray, AWEPostPageAnchorViewModel, NSString, NSDictionary, AWENewPublishCompanyCouponTableCell;

@interface AWEPostPageLocalLifeMatchMissionElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (nonatomic) BOOL shouldShowLocalLifeMission;
@property (retain, nonatomic) AWENewPublishCompanyCouponTableCell *localLifeMatchMissionCell;
@property (retain, nonatomic) AWEStudioLocalLifeMissionRequestModel *requestModel;
@property (retain, nonatomic) AWEPostPageAnchorViewModel *missionAnchorVM;
@property (copy, nonatomic) NSArray *includeMissionInfoTypeAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)poiService;
- (void)p_trackEvent:(id)a0 params:(id)a1;
- (id)schemaDiffManager;
- (id)companyCouponService;
- (void)p_addBindSignObserver;
- (void)setupCell:(id)a0;
- (BOOL)anchor:(id)a0 shouldSelectAnchorWithType:(long long)a1;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)isAbnormalAnchor;
- (BOOL)forceReceiveEvents;
- (id)matchMission;
- (void)startLocalLifeMissionCellClickedWithPositionIndex:(long long)a0;
- (void)p_updateMissionCellWithHasInfo:(BOOL)a0 missionName:(id)a1;
- (void)addLocalLifeMatchMissionObservers;
- (void)checkLocalLifeMatchMissionRequest;
- (void)resetLocalLifeMatchMissionCellAndInfo;
- (void)localLifeMissionAddAnchorJSBNotification:(id)a0;
- (void)p_cleanOtherAnchorInfo;
- (void)p_updateLocalLifeMissionWithNotiDict:(id)a0 type:(long long)a1 reload:(BOOL)a2;
- (void)p_updatePublishModelContentWithDict:(id)a0 trackDict:(id)a1 notiDict:(id)a2 needDealSchemaDiff:(BOOL)a3;
- (id)getActionDataFromNotiDict:(id)a0;
- (void)updateLocalLifeMissionStatusForFirstLoad;
- (void)tapXToResetLocalLifeMatchMissionCellAndInfo;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)cleanUp;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (id)cellClass;
- (void)viewWillDisappear:(BOOL)a0;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;

@end
