@class BDPExtLogManager;

@interface BDPPluginLog_HG : BDPBridgeInstancePlugin

@property (nonatomic) long long logLevel;
@property (retain, nonatomic) BDPExtLogManager *logManager;

- (BOOL)p_checkValidityForType:(id)a0;
- (void)operateFeedbackLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendRealtimeLogWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
