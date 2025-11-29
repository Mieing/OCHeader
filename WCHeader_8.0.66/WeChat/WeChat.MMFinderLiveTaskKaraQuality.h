@interface WeChat.MMFinderLiveTaskKaraQuality : NSObject <TXPIPManagerExt> {
    void /* unknown type, empty encoding */ currentLiveID;
    void /* unknown type, empty encoding */ switchInfo;
    void /* unknown type, empty encoding */ eventCollection;
    void /* unknown type, empty encoding */ statusCollection;
}

- (id)init;
- (void)dealloc;
- (BOOL)restartProphetWithLive:(id)a0;
- (BOOL)startProphetWithLive:(id)a0;
- (long long)stepProphetWithLive:(id)a0 state:(id)a1;
- (void)stopProphet;
- (void)stopProphetWithLive:(id)a0;
- (BOOL)isProphetStarted;
- (BOOL)canProphetStep:(id)a0;
- (void)collectEventWithLive:(id)a0 oldPlayerStatus:(long long)a1 newPlayerStatus:(long long)a2;
- (void)collectEventWithLive:(id)a0 playerEvent:(long long)a1 parameters:(id)a2;
- (void)collectStatusWithLive:(id)a0 anchorStatus:(long long)a1;
- (void)collectStatusWithLive:(id)a0 metricInfo:(id)a1;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (void)onStartCustomPixelTransferChange;
- (void)reportThatStartSwitchWithLive:(id)a0 startQuality:(long long)a1 targetQuality:(long long)a2 smooth:(BOOL)a3 manually:(BOOL)a4;
- (void)reportThatFinishSwitchWithLive:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end
