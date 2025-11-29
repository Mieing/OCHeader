@class WCSessionPageConfigModel, WCSessionFlowConfigModel, WCSessionUBAConfigModel;

@interface WCSessionFlowConfiger : NSObject <IExptServiceExt>

@property (retain, nonatomic) WCSessionFlowConfigModel *sessionFlowConfigModel;
@property (retain, nonatomic) WCSessionPageConfigModel *sessionPageConfigModel;
@property (retain, nonatomic) WCSessionUBAConfigModel *sessionUBAConfigModel;
@property (nonatomic) BOOL isNeedReportSingle;
@property (nonatomic) BOOL isNeedCollectSessionUBA;

- (void)onInit;
- (void)onClearData;
- (void)initSessionFlowConfig;
- (void)initSessionPageConfig;
- (void)initSessionUBA;
- (id)getSessionFlowConfigsByPageName:(id)a0 prePage:(id)a1;
- (id)getSessionFlowConfigByPageName:(id)a0 prePage:(id)a1 sessionParamExpects:(id)a2;
- (id)getSessionFlowConfigBySid:(id)a0;
- (id)getSessionFlowSidByPageName:(id)a0 prePage:(id)a1 sessionParamExpects:(id)a2;
- (id)getPagePathConfigModel:(id)a0;
- (id)getPagePathConfigModels:(id)a0;
- (id)getSessionUBAUnitConfigModel:(id)a0;
- (id)getMonitorViewOperation:(id)a0 pageName:(id)a1;
- (id)getMonitorViewOperation:(id)a0 pageName:(id)a1 viewID:(id)a2;
- (BOOL)isBlackListPage:(id)a0;
- (BOOL)isMainTabPage:(id)a0;
- (BOOL)isFilterPage:(id)a0;
- (BOOL)isNeedReportSingleSwitch;
- (BOOL)isMonitorSessionFlow;
- (BOOL)isSessionMonitorSwitch;
- (BOOL)isSessionUBAMonitorSwitch;
- (BOOL)isSessionControlMonitorGesture;
- (BOOL)isSessionControlMonitorUIcontrol;
- (void)onSessionConfigChange:(id)a0 isDel:(BOOL)a1 needReport:(BOOL)a2;
- (void)realHandleSessionConfigChange:(id)a0 isDel:(BOOL)a1 needReport:(BOOL)a2 isLocal:(BOOL)a3;
- (void)onSessionPageConfigChange:(id)a0 isDel:(BOOL)a1 andSessionPageId:(unsigned int)a2 needReport:(BOOL)a3;
- (void)onSessionUBAConfigChange:(id)a0 isDel:(BOOL)a1;
- (id)getMMKV;
- (void).cxx_destruct;

@end
