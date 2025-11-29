@class NSMutableDictionary, NSMutableOrderedSet, CommonReliableSyncHelper, NSObject;
@protocol OS_dispatch_queue;

@interface CommonReliableSyncLogic : MMObject

@property (retain, nonatomic) NSMutableDictionary *dicSyncKeyInfo;
@property (nonatomic) BOOL isSyncing;
@property (retain, nonatomic) NSMutableOrderedSet *queueSync;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) CommonReliableSyncHelper *syncHelper;
@property (retain, nonatomic) NSMutableDictionary *dicCommonReliableSync;

- (id)init;
- (void)initData;
- (id)getRorkerQueueName;
- (void)doConfig;
- (void)syncWithActionNotifyData:(id)a0 commBizIdBit:(unsigned int)a1;
- (void)checkQueue;
- (void)handleCommonReliable:(id)a0;
- (void)handleCommonReliableResponse:(id)a0 syncAction:(id)a1;
- (void)asyncHandleCommonReliableResponse:(id)a0 syncAction:(id)a1 handleResultSuccess:(BOOL)a2;
- (void)asyncHandleCommonReliableResponseCore:(id)a0 syncAction:(id)a1 handleResultSuccess:(BOOL)a2;
- (unsigned int)getCgiNumberWithCommBizIdBit:(unsigned int)a0;
- (id)getCgiNumberNameWithCommBizIdBit:(unsigned int)a0;
- (void)addAutoauthSyncActionWithCommBizIdBit:(unsigned int)a0 syncScene:(unsigned int)a1;
- (id)getMigrateSyncKeyBuffWithCommBizIdBit:(unsigned int)a0;
- (id)syncKeyBuffWithcommBizIdBit:(unsigned int)a0;
- (void)setSyncKey:(id)a0 commBizIdBit:(unsigned int)a1;
- (void)serviceHandleAuthOk;
- (void)serviceHandleInitContactOk;
- (void).cxx_destruct;

@end
