@class NSMutableArray;

@interface AWEByteSyncManager : NSObject

@property (retain, nonatomic) NSMutableArray *allCommonParamsBlocks;

+ (void)registerBusinessId:(int)a0 handleMessageBlock:(id /* block */)a1;
+ (void)unregisterBusinessId:(int)a0;
+ (void)registerCommonParamsBlock:(id /* block */)a0;
+ (void)uploadMessageData:(id)a0 forBusinessId:(int)a1;
+ (void)trySyncDataFromServer;
+ (id)sharedManager;

- (id)commonParams;
- (void)setupBDUGSyncSDK;
- (void).cxx_destruct;

@end
