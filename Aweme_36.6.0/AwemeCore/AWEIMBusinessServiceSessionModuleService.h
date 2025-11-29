@class NSMutableDictionary, NSString, NSArray, BFTaskCompletionSource, NSObject;
@protocol OS_dispatch_queue, AWEIMBusinessServiceSessionModuleServiceDelegate;

@interface AWEIMBusinessServiceSessionModuleService : HTSService <AWEUserMessage, HTSService, AWEIMBusinessServiceSessionModuleService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) NSMutableDictionary *serviceUnreadCountMap;
@property (retain, nonatomic) NSMutableDictionary *notifyServiceMap;
@property (weak, nonatomic) id<AWEIMBusinessServiceSessionModuleServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixServiceQueue;
@property (nonatomic) BOOL hasNotifiedDelayBeforeStartIM;
@property (nonatomic) BOOL hasNotifiedBeforeStartIM;
@property (retain, nonatomic) BFTaskCompletionSource *notifyTaskSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *snapshot;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)asyncLoadSomeServicesDataAndTailingDebounceReloadNoticeWithServiceTypes:(id)a0;
- (void)addWeakDelegate:(id)a0;
- (int)getTotalServiceUnreadCount;
- (void)cleanWithServiceType:(long long)a0;
- (void)notifyBeforeStartIM;
- (void)updateServiceChatListModelsWithUpdateModel:(id)a0;
- (void)updateChatListServiceTotolUnreadCountWithModel:(id)a0;
- (BOOL)ignoreServiceRunloopAndBackgroundQueueOpt;
- (id)currentUID;
- (void)didTriggerCellEventWithAction:(id)a0;
- (BOOL)enableAddCurrentCellActionWithType:(long long)a0 serviceModel:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 serviceModel:(id)a3 extra:(id)a4;
- (void)cleanServicesUnreadCountWithExtra:(id)a0 serviceTypes:(id)a1;
- (id)notifyCompletionTask;
- (id)loadLocalServicesData;
- (void)completionNotifyTask;
- (void)performUpdateServiceChatListModelsWithUpdateModel:(id)a0;
- (BOOL)isCurrentUID:(id)a0;
- (void)beginUpdateServiceChatListModelsWithUpdateModel:(id)a0;
- (void)performUpdateChatListServiceTotolUnreadCountWithModel:(id)a0;
- (void)beginUpdateChatListServiceTotolUnreadCountWithModel:(id)a0;
- (id)getCurrentServiceWithServiceModel:(id)a0;
- (id)startLoadSomeServicesTaskWithServiceTypes:(id)a0;
- (id)startLoadAllServiceTask;
- (id)getServiceDataWithService:(id)a0;
- (id)convertServiceModelToChatModel:(id)a0;
- (id)batchAsyncLoadSomeServicesDataWithServiceTypes:(id)a0;
- (id)preLoadWithTask:(id)a0 batchArr:(id)a1;
- (id)batchUpdateServiceList:(id)a0 shouldReload:(BOOL)a1 serviceTypes:(id)a2;
- (void)beginTailDebounceReloadNoticeWithServiceTypes:(id)a0;
- (void)trackPerformanceWithAPI:(unsigned long long)a0 reason:(int)a1 startTime:(double)a2 endTime:(double)a3 serviceType:(long long)a4;
- (id)batchDeleteChatListServiceModels:(id)a0 shouldReload:(BOOL)a1 serviceType:(long long)a2;
- (id)deleteIMServiceModel:(id)a0 shouldReload:(BOOL)a1 serviceType:(long long)a2;
- (void)removeServiceChat:(id)a0;
- (id)taskForRemoveServiceChat:(id)a0;
- (id)preCheckServiceModels:(id)a0;
- (id)beginSyncInsetServiceChatModel:(id)a0;
- (id)beginAsyncInsetServiceChatModel:(id)a0;
- (void)beginRemoveServiceChatWithContext:(id)a0;
- (void)beginInsertServiceChatWithContext:(id)a0;
- (void)insertServiceChat:(id)a0;
- (id)taskForInsertServiceChat:(id)a0;
- (id)servicesWithServiceTypes:(id)a0;
- (void)observerRunloopFree:(id /* block */)a0;
- (BOOL)ignoreDelayNotifyServiceInitOpt;
- (void).cxx_destruct;
- (id)init;
- (id)services;
- (void)dealloc;
- (void)clean;
- (void)registerServiceClass:(id)a0;

@end
