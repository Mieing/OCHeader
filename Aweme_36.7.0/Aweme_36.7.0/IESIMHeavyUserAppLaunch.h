@class NSString;

@interface IESIMHeavyUserAppLaunch : _TtCO14IESIMGroupImpl16HeavyUserMonitor9Component <IESIMGroupImpl.HeavyUserQOEMonitorParamsProvider, IESIMUserServiceMessage, IESIMGroupImpl.HeavyUserAppLaunchInterface> {
    void /* function */ userTag;
    void /* unknown type, empty encoding */ appLaunchInterval;
}

@property (nonatomic, copy) NSString *userTag;

- (void)didFinishLoginWithUid:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)heavyUserQOEMonitorParams;
- (void).cxx_destruct;
- (id)init;

@end
