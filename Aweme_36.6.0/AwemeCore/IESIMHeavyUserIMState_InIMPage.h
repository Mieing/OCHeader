@interface IESIMHeavyUserIMState_InIMPage : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserQOEMonitorParamsProvider, IESIMGroupImpl.HeavyUserIMStateInIMPageInterface> {
    void /* unknown type, empty encoding */ scenes;
}

- (void)componentDidMounted:(id)a0;
- (id)heavyUserQOEMonitorParams;
- (void)reportLeaveIMPageWith:(id)a0;
- (void)reportEnterIMPageWith:(id)a0;
- (id)currentPageScene;
- (void).cxx_destruct;
- (id)init;

@end
