@class NSDictionary, NSMutableDictionary, NSString;
@protocol AWEOfficialNotificationProtocol;

@interface AWESearchSideBarRedDotManager : NSObject <AWEOfficialNotificationOtherCountMessageProtocol>

@property (readonly, nonatomic) BOOL needShowUserGuide;
@property (nonatomic) BOOL isPageAppear;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) long long messageUnreadCount;
@property (nonatomic) long long notificationUnreadCount;
@property (nonatomic) long long notificationDotCount;
@property (nonatomic) long long notificationShowType;
@property (copy, nonatomic) NSDictionary *templateCount;
@property (retain, nonatomic) id<AWEOfficialNotificationProtocol> notificationCountManager;
@property (retain, nonatomic) NSMutableDictionary *commonUnreadCountMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)leftSideBarGroupType;
- (void)onOtherCountChangeReason:(unsigned long long)a0 model:(id)a1;
- (void)updateSideBarNoticeInfo:(id)a0 completion:(id /* block */)a1;
- (void)updateRedDotStatus;
- (void)onCreate;
- (void)AINote_sidePageAppearChange:(BOOL)a0;
- (void)AINote_checkAINoteRedData;
- (void)AINote_clearUnread;
- (void)bindBusinessId:(id)a0 withIndex:(long long)a1;
- (id)AINote_buildScheme:(id)a0;
- (void)checkIfClearMessageWhenClickWithBusinessId:(id)a0;
- (unsigned long long)messageCountWithBusinessId:(id)a0;
- (void)updateNotificationUnreadCount;
- (void)clearNotificationUnreadCountWithNeedBroadcast:(BOOL)a0;
- (BOOL)AINote_canAiNote;
- (BOOL)haveBusiness:(id)a0;
- (void)setAINote_data:(id)a0;
- (long long)AINote_unreadCount;
- (void)p_updateUnreadCount:(unsigned long long)a0;
- (void)updateMessageCountWithBusinessId:(id)a0 count:(unsigned long long)a1;
- (void)freshCommonListWithBusinessId:(id)a0;
- (id)AINote_data;
- (BOOL)AINote_hasRedPoint;
- (void)AINote_onCreate;
- (void)updateMessageUnreadCountByObserve:(BOOL)a0;
- (void)updateRedDotWhenLogin;
- (void)updateMessageUnreadCount;
- (void)updateNotificationUnreadCountByObserve:(BOOL)a0;
- (void)p_clearNotificationUnreadWithNeedBroadcast:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupObservers;
- (void)dealloc;
- (void)refreshData;

@end
