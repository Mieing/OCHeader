@interface _TtCO14IESIMGroupImpl16HeavyUserMonitor22IMState_TriggerCounter : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserIMStateAsyncStateInterface, IESIMGroupImpl.HeavyUserQOEMonitorParamsProvider> {
    void /* unknown type, empty encoding */ sdkCounter;
    void /* unknown type, empty encoding */ satisfyState;
    void /* unknown type, empty encoding */ loopCheckToken;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ counter;
    void /* unknown type, empty encoding */ settings;
}

- (void)componentDidMounted:(id)a0;
- (id)heavyUserQOEMonitorParams;
- (void).cxx_destruct;
- (id)init;
- (id)refreshState;

@end
