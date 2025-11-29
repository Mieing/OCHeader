@class BDPUniqueID, BDPSubscribe;

@interface BDPPluginSubscribe : BDPBridgeInstancePlugin {
    BDPSubscribe *_subs;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)p_requestV2SubscribeMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)p_requestV1SubscribeMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)p_handleRequestSubscribeMessageWithAuthResult:(id)a0 errCode:(long long)a1 callback:(id /* block */)a2;
- (void)requestSubscribeMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
