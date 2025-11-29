@class NSString, NSMutableDictionary;

@interface WCSHmdtMgr : MMRootService <MMKernelExt, IMsgExt, MMServiceProtocol> {
    BOOL _isEnable;
    NSMutableDictionary *_dicSceneBehaviorID;
    unsigned int finderLiveSampleCount;
    unsigned int finderLiveSampleIntervalPreReport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isHmdtEnable;
- (void)startTask:(unsigned int)a0 behaviorID:(id)a1;
- (void)startTask:(unsigned int)a0 behaviorID:(id)a1 config:(struct TaskConfig { unsigned int x0; } *)a2;
- (void)setBehaviorID:(id)a0 forScene:(unsigned int)a1;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)startFinderLiveReportWithLiveid:(unsigned long long)a0;
- (void)stopFinderLiveReport;
- (void)startFinderLiveReportUntilStopWithBid:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
