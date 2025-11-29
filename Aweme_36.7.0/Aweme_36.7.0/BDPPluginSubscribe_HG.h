@class BDPUniqueID, BDPSubscribe_HG;

@interface BDPPluginSubscribe_HG : BDPBridgeInstancePlugin {
    BDPSubscribe_HG *_subs;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;

+ (id)getSubscribeInstanceFromUniqueID:(id)a0;

- (id)callbackErrorWithCode:(long long)a0;
- (void)requestSubscribeMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)failCallbackDataWithCode:(long long)a0;
- (long long)checkAllTemplate:(id)a0 modelType:(unsigned long long *)a1 timesType:(unsigned long long *)a2 statusInfo:(id *)a3;
- (id)beforeInvokeCheck:(id)a0 params:(id)a1 method:(id)a2;
- (id)checkParamIsValid:(id)a0 method:(id)a1;
- (unsigned long long)oldErrorCode:(long long)a0;
- (id)errMsgFromCode:(long long)a0;
- (void)requestFeedSubscribeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkFeedSubscribeStatusWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
