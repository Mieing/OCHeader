@class NSMutableDictionary, NSTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AWEECOMIMPaasKVStoreProtocol, OS_dispatch_semaphore;

@interface AWEECOMIMFTSDataSyncManager : NSObject

@property (retain, nonatomic) id<AWEECOMIMPaasKVStoreProtocol> storage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *isSyncingSemaphore;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } isSyncingMutex;
@property (retain, nonatomic) NSTimer *syncConversationTimer;
@property (nonatomic) BOOL isSyncingConversationDatas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncConversationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncConversationSemaphore;
@property (retain, nonatomic) NSTimer *syncMessageTimer;
@property (nonatomic) BOOL isSyncingMessageDatas;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncMessageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *syncMessageSemaphore;
@property (nonatomic) BOOL hasRollbackMultiMessages;
@property (nonatomic) BOOL hasSyncFirstPageMultiMessages;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lastChatTimeSemaphore;
@property (retain, nonatomic) NSMutableDictionary *convPeerUidLastChatTimeMap;
@property (copy, nonatomic) id /* block */ filterConversationBlock;
@property (copy, nonatomic) id /* block */ filterMessageBlock;
@property (retain, nonatomic) NSMutableSet *hasStoreConvSet;

+ (id)createFTSDatasFromConversation:(id)a0;
+ (id)createFTSDataWithConversation:(id)a0 content:(id)a1 contentType:(long long)a2 extDict:(id)a3;
+ (id)firstLettersJoinBySpaceOfPinyin:(id)a0 origin:(id)a1;
+ (id)createFTSDatasFromMessage:(id)a0;
+ (id)syncMessageTypes;
+ (id)sharedInstance;

- (void)resetConvSync;
- (void)setupForCurrentUser;
- (void)syncSaveMessages:(id)a0;
- (void)syncSaveGroupConversations:(id)a0;
- (void)syncAllMessagesIfNeed;
- (void)getNotificationPigeonMessageDidInsert:(id)a0;
- (void)getNotificationPigeonMessageDidUpdate:(id)a0;
- (void)getNotificationPigeonConversationDidUpdate:(id)a0;
- (void)getNotificationPigeonMessageDeleted:(id)a0;
- (void)syncMessageDatasAfterSetUpFTSDBFinished;
- (void)syncConversationDatasAfterSetUpFTSDBFinished;
- (void)storageAndSyncConversationDatas:(id)a0;
- (void)tryToSyncStorageConversationDatas:(id)a0;
- (id)storageDatas:(id)a0 withKey:(id)a1 semaphore:(id)a2;
- (void)setUpFTSDBFinished;
- (id)clipSyncDatas:(id)a0;
- (void)setTimerWithConversationDatas:(id)a0;
- (void)syncStorageConversationDatasDelay:(id)a0;
- (id)subrangeStorageDatasWithCount:(long long)a0 key:(id)a1 semaphore:(id)a2;
- (void)filterAndSyncStorageConversations:(id)a0;
- (void)syncSaveMessageIds:(id)a0 conversationMap:(id)a1;
- (void)storageAndSyncMessageDatas:(id)a0;
- (void)tryToSyncStorageMessagesDatas:(id)a0;
- (void)setTimerWithMessagesDatas:(id)a0;
- (void)syncStorageMessagesDatasDelay:(id)a0;
- (void)filterAndSyncStorageMessages:(id)a0;
- (void)batchSyncAllMessagesIfNeedOpt;
- (void)syncDeleteGroupConversationIds:(id)a0;
- (void)syncMessageDeleteByConvIds:(id)a0;
- (void)syncMessageDeleteByIds:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
