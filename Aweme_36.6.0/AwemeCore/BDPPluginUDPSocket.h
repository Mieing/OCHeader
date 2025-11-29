@class NSString, NSMutableArray;

@interface BDPPluginUDPSocket : BDPBridgeInstancePlugin <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSMutableArray *socketIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)createUDPSocketWithCallback:(id /* block */)a0 task:(id)a1;
- (void)bindWithSocketId:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)sendWithSocketId:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)connectWithSocketId:(id)a0 param:(id)a1 callback:(id /* block */)a2;
- (void)closeWithSocketId:(id)a0 callback:(id /* block */)a1;
- (void)operateUDPSocketSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
