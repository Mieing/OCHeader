@class AWEIMInteractNotificationCountModel, NSString, NSMutableDictionary, NSArray, NSNumber, NSObject;
@protocol AWEMessageReachSideBarNoticeInfoUpdateProtocol;

@interface AWEIMOtherNotificationCountManager : NSObject <AWEUserMessage, AWEOfficialNotificationProtocol>

@property (readonly, nonatomic) long long leftSideBarGroupType;
@property (retain, nonatomic) NSMutableDictionary *assistantUnreadCountMap;
@property (retain, nonatomic) NSMutableDictionary *assistantDotUnreadCountMap;
@property (retain, nonatomic) NSMutableDictionary *assistantUnreadShowTypeMap;
@property (retain, nonatomic) NSMutableDictionary *sideNoticeCountMap;
@property (retain, nonatomic) AWEIMInteractNotificationCountModel *leftSideBarNoticeCount;
@property (copy, nonatomic) id /* block */ currentCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long newFansCount;
@property (retain, nonatomic) NSNumber *lastReadNewFansNoticeID;
@property (retain, nonatomic) NSArray *customerServiceGroups;
@property (retain, nonatomic) NSObject<AWEMessageReachSideBarNoticeInfoUpdateProtocol> *currentInfoUpdate;

+ (Class)aAWENoticeInteractorLiteAdapterClass;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)readAssistantGroup:(long long)a0;
- (long long)interactiveNoticeCellUnreadCount;
- (id)countModelWithGroup:(long long)a0;
- (void)triggerMRSideBarBadgeStrategyCompletion:(id)a0 result:(id)a1;
- (long long)getUnreadCountWithGroup:(long long)a0;
- (long long)getDotUnreadCountWithGroup:(long long)a0;
- (void)fetchInteractNotification:(id /* block */)a0 isLongConnectionRequest:(BOOL)a1 context:(id)a2;
- (void)onNoticeCountUpdateInfo:(id)a0 unreadTemplate:(id)a1 fromPush:(BOOL)a2 sendTime:(long long)a3 model:(id)a4 context:(id)a5;
- (void)onNoticeCountUpdateInfo:(id)a0 fromPush:(BOOL)a1 model:(id)a2;
- (id)aAWENoticeInteractorLiteAdapter;
- (unsigned long long)unreadCountShowTypeGroup:(long long)a0;
- (long long)interactiveFlameCellUnreadCount;
- (long long)getUnreadCountWithGroupValue:(long long)a0;
- (long long)interactiveCommentCellUnreadCount;
- (void)configCustomerServerNoticeCountWithCountModel:(id)a0;
- (id)getFetchReasonFromContext:(id)a0;
- (void)configLeftSideBarNoticeCount:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
