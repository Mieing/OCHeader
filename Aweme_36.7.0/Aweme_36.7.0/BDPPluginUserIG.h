@class BDPUniqueID, BDPQueue;

@interface BDPPluginUserIG : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isLoginFinish;
@property (retain, nonatomic) BDPQueue *queue;

- (void)loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkSessionWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getHostInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
