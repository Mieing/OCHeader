@class NSHashTable, NSLock, NSString, NSMutableDictionary, NSDictionary, NSMutableSet, NSObject, TIMXThreadSafeMutableDictionary, TIMXSDKInstance;
@protocol OS_dispatch_queue;

@interface TIMXOTotalUnreadCountManager : NSObject <TIMXStartUpTaskProtocol, TIMXOTotalUnreadCountServer, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long currentUserID;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observersOperateQueue;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientsOperateQueue;
@property (retain, nonatomic) NSMutableDictionary *unreadCounts;
@property (nonatomic) int totalUnreadCount;
@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *appsUnreadCountMap;
@property (retain, nonatomic) NSLock *unreadCountsLock;
@property (copy, nonatomic) NSDictionary *cidToUnreadCountDict;
@property (nonatomic) BOOL currentUserHasSucceedInOfflinePulling;
@property (nonatomic) BOOL currentUserHasFinishedDBUnreadCountPick;
@property (nonatomic) BOOL currentUserHasFinishedOfflinePullingUnreadWritten;
@property (readonly, nonatomic) int currentTotalUnreadCount;
@property (nonatomic) BOOL isTotalUnreadCountReadyAfterMarkRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)userDidLogin:(id)a0;
- (void)removeObserve:(id)a0;
- (id)unreadCountAfterDBDataReadyOtherwiseNil;
- (void)onSuccessFinishOfflinePulling;
- (id)unreadCountAfterOfflinePullingOtherwiseNil;
- (id)unreadCountAppsAfterOfflinePullingOtherwiseNil;
- (id)unreadCountAppsAfterDBDataReadyOtherwiseNil;
- (void)unreadCountForUserID:(long long)a0 convBoxType:(long long)a1 changeTo:(int)a2 cidToUnreadCountDict:(id)a3 context:(id)a4;
- (void)calUnreadCountFinishedAfterMarkReadWithContext:(id)a0;
- (void)fullDBDataInserted:(id)a0;
- (void)updateAppsUnreadCount:(id)a0;
- (void)offlinePullingDataInserted:(id)a0;
- (void)p_applyCurrentUid;
- (void)p_pushUnreadChangeNotiWithBoxType:(long long)a0 cidToUnreadCountDict:(id)a1;
- (void)p_pushUnreadChangeNoti;
- (id)unreadCount_unsafe;
- (id)unreadCountAfterMarkReadTotalUnreadReadyOtherwiseNil;
- (id)unreadCountAppsAfterMarkReadTotalUnreadReadyOtherwiseNil;
- (void).cxx_destruct;
- (BOOL)addObserver:(id)a0;
- (BOOL)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
