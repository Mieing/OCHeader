@class NSMutableDictionary;

@interface GCBaseServer : NSObject

@property (nonatomic) BOOL exited;
@property (nonatomic) long long requestSeq;
@property (retain, nonatomic) NSMutableDictionary *longPollingTimeDict;
@property (retain, nonatomic) NSMutableDictionary *cmdIdDict;

- (id)init;
- (void)sendPBRequest:(id)a0 command:(unsigned int)a1 svrPath:(id)a2 responseClass:(Class)a3 longPolling:(BOOL)a4 completion:(id /* block */)a5;
- (BOOL)defaultSpeedRequeset;
- (id)checkResponseError:(id)a0;
- (void)sendPBRequest:(id)a0 command:(unsigned int)a1 svrPath:(id)a2 responseClass:(Class)a3 longPolling:(BOOL)a4 additionalInfo:(id)a5 completion:(id /* block */)a6;
- (void)invalidatePreviousRequest;
- (void)exitRoom;
- (void)onExitRoom;
- (float)delaySecondsAfterFaile;
- (void).cxx_destruct;

@end
