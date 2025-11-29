@class NSString, AWEPerfFPSMonitor;

@interface AWEIMPerfFPSMonitorWrapper : NSObject <IESIMPerfFPSMonitorProtocol>

@property (retain, nonatomic) AWEPerfFPSMonitor *fpsMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endSceneWithName:(id)a0 context:(id)a1;
- (void)beginSceneWithName:(id)a0 context:(id)a1;
- (id)__dictOfRecord:(id)a0 stageSuffix:(id)a1;
- (id)__key:(id)a0 suffix:(id)a1;
- (id)phaseDictWithSceneName:(id)a0 context:(id)a1;
- (void)updateExtra:(id)a0 withSceneName:(id)a1;
- (void).cxx_destruct;

@end
