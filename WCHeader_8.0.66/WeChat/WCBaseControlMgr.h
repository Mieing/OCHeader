@class NSString, NSMutableArray;

@interface WCBaseControlMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_arrLogicStack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (unsigned int)startLogic:(id)a0;
- (id)getLogic:(unsigned int)a0;
- (BOOL)isCurrentLogic:(id)a0;
- (id)getCurrentLogic;
- (void)stopCurrentLogic;
- (void)stopLogic:(unsigned int)a0;
- (id)getAllLogic;
- (void)cancelAllLogic;
- (void)cancelAllLogicExcept:(id)a0;
- (void).cxx_destruct;

@end
