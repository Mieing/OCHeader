@class IESWCDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMConversationKVCacheManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) IESWCDatabase *database;
@property (nonatomic) BOOL isWCDBToTwo;
@property (nonatomic) BOOL traceError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dbFilePath;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)__async:(id /* block */)a0;
- (void)__prepare;
- (void)traceAllError;
- (id)__sync:(id /* block */)a0;
- (id)kVPairsForConversationId:(id)a0;
- (void)__dbInitForWCDBTwo;
- (void)__dbInitForWCDBOne;
- (void)__tryRebuildDB;
- (BOOL)__createTable;
- (BOOL)__createWCDBTwo;
- (void)asyncSaveObjects:(id)a0;
- (void)asyncGetKVPairsForConversationId:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
