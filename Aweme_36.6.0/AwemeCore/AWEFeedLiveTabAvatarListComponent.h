@class FeedItem, NSString, FeedResponse, NSDictionary, UIView, UILabel, AWEFeedLiveTabAvatarListView;
@protocol AWELiveCheckDataManagerService;

@interface AWEFeedLiveTabAvatarListComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabViewControllerLifeCycleAction, AWEFeedLiveTabInsertAction, AWELiveCheckDataManagerSubscriber, AWELiveCheckDataManagerSubscriber, AWEFeedLiveTabAvatarListService>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEFeedLiveTabAvatarListView *avatarListView;
@property (retain, nonatomic) FeedResponse *avatarListData;
@property (retain, nonatomic) FeedItem *historyItem;
@property (retain, nonatomic) UIView *appointmentView;
@property (retain, nonatomic) UIView *splitView;
@property (nonatomic) BOOL lastSkyShow;
@property (retain, nonatomic) NSDictionary *avatarConfig;
@property (retain, nonatomic) UILabel *oftenWatchGuideLabel;
@property (retain, nonatomic) UIView *watchHistoryGuideView;
@property (copy, nonatomic) NSString *watchHistorySchema;
@property (nonatomic) BOOL enableLiveVisitHistory;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentStatus;
- (id)liveModuleService;
- (void)onLiveUpdateReceive:(id)a0 PageType:(long long)a1;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)feedLiveTabWillAppear:(id)a0;
- (void)feedLiveTabDidDisappear;
- (void)feedLiveTabDidEnterForeground;
- (void)insertSubComponentWithData:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertAppointmentView:(id)a0;
- (void)removeAppointmentView;
- (void)updateComponentWith:(id)a0;
- (void)bindService;
- (void)tabModuleShowWithItem:(id)a0 order:(unsigned long long)a1;
- (void)avatarDidClickedWithUserItem:(id)a0 selectedItemIndex:(unsigned long long)a1;
- (void)tabModuleClickWithItem:(id)a0 selectedItemIndex:(unsigned long long)a1;
- (void)tabModuleSlideWithMaxTabOrder:(unsigned long long)a0 total:(unsigned long long)a1;
- (BOOL)enableCheckAlive;
- (void)subscribeLiveCheckWithItems:(id)a0;
- (void)historyTabModuleShow:(long long)a0;
- (void)historyTabModuleClick:(long long)a0;
- (void)reportLiveShowTrackerIfNeed;
- (void)reportHistoryShowTrackerIfNeed;
- (id)avatarListDatas;
- (id)transToVideoFeedModelsWithItems:(id)a0;
- (void)deleteFinishedRoomIfNeed:(id)a0;
- (id)liveTabLandingParams;
- (void)insertAvatarListDataWithItems:(id)a0 insertIndex:(unsigned long long)a1;
- (id)tabModuleParamsWithItem:(id)a0 index:(unsigned long long)a1;
- (void)openHistorySchema;
- (double)heightOfComponent;
- (id)tagTextWithTagType:(int)a0;
- (void)becomeActive;
- (double)topPadding;
- (void).cxx_destruct;
- (id)contentView;
- (id)init;
- (void)dealloc;
- (void)setupView;

@end
