@class NSString, NSMutableDictionary;

@interface EcsMonitorMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *stepName2beginTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)beginStep:(id)a0;
- (void)endStep:(id)a0;
- (void)makeSureStepName2beginTimeStampInit;
- (void).cxx_destruct;

@end
