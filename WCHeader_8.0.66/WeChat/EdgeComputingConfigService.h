@class EdgeComputingConfigParser, NSMutableDictionary;

@interface EdgeComputingConfigService : MMObject <IExptServiceExt> {
    NSMutableDictionary *scriptConfigModels;
    NSMutableDictionary *sqlConfigModels;
    EdgeComputingConfigParser *configParser;
}

- (void)onInit;
- (void)onClearData;
- (void)initConfig;
- (id)getScriptConfigModels;
- (id)getSqlConfigModels;
- (void)removeSqlConfigModel:(id)a0;
- (void)onNewEdgeComputingScriptConfigUpdate:(unsigned int)a0 andExptItem:(id)a1;
- (void)onNewEdgeComputingScriptConfigDelete:(unsigned int)a0;
- (void)onNewEdgeComputingSqlConfigUpdate:(unsigned int)a0 andExptItem:(id)a1;
- (void)onNewEdgeComputingSqlConfigDelete:(unsigned int)a0;
- (void)onSessionEdgeComputingScriptConfigChange:(id)a0 isDel:(BOOL)a1 andSessionPageId:(unsigned int)a2;
- (void)onSessionEdgeComputingSqlConfigChange:(id)a0 isDel:(BOOL)a1 andSessionPageId:(unsigned int)a2;
- (void)tryToDownloadScript;
- (void).cxx_destruct;

@end
