@class NSMutableDictionary, NSMutableArray;

@interface AWESearchGPTByteSyncManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *syncMsgDict;
@property (retain, nonatomic) NSMutableArray *syncMsgArray;
@property (nonatomic) BOOL isConnecting;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)trySyncDataFromServer;
- (void)registerByteSync;
- (void)handleNewMsg:(id)a0;
- (int)byteSyncBusinessID;
- (void)unregisterByteSync;
- (void)clearSyncMsgDataWithSearchID:(id)a0;
- (void)readSyncMsgDataWithSearchID:(id)a0 complete:(id /* block */)a1;
- (void)receiveDataDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
