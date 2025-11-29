@interface IESIMHeavyUserMonitorException_CPU : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserQOEMonitorParamsProvider> {
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ loopContext;
    void /* unknown type, empty encoding */ imPageInterface;
    void /* unknown type, empty encoding */ imCollector;
}

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)heavyUserQOEMonitorParams;
- (void).cxx_destruct;
- (id)init;

@end
