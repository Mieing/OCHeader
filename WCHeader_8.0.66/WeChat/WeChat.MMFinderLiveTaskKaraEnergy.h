@interface WeChat.MMFinderLiveTaskKaraEnergy : NSObject <TXPIPManagerExt, WeChat.MMFinderLiveTaskKaraExt> {
    void /* unknown type, empty encoding */ currentLiveID;
    void /* unknown type, empty encoding */ eventCollection;
    void /* unknown type, empty encoding */ statusCollection;
}

- (id)init;
- (void)dealloc;
- (BOOL)restartProphetWithLive:(id)a0;
- (BOOL)startProphetWithLive:(id)a0;
- (id)stepProphetWithLive:(id)a0 metricsInfo:(id)a1;
- (void)stopProphet;
- (void)stopProphetWithLive:(id)a0;
- (BOOL)isProphetStarted;
- (BOOL)canProphetStep:(id)a0;
- (void)collectEventWithLive:(id)a0 oldPlayerStatus:(long long)a1 newPlayerStatus:(long long)a2;
- (void)collectStatusWithLive:(id)a0 anchorStatus:(long long)a1;
- (void)collectQoSWithLive:(id)a0 QoS:(id)a1 videoQualityLevel:(int)a2 isH265:(BOOL)a3 isEnhanceEnabled:(BOOL)a4;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (void)onStartCustomPixelTransferChange;
- (void)giftDidPlay;
- (void).cxx_destruct;

@end
