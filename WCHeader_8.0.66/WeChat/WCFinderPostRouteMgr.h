@class NSString, WCFinderDataItem;

@interface WCFinderPostRouteMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long phaseKey;
@property (nonatomic) int sceneKey;
@property (nonatomic) int actionType;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long postSourceType;
@property (copy, nonatomic) NSString *traceKey;
@property (copy, nonatomic) NSString *reportKey;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (nonatomic) int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)convertVideoSourceToType:(unsigned long long)a0;
+ (BOOL)isExitCustomKey:(id)a0;

- (void)updatePhaseKey:(unsigned long long)a0 sceneKey:(int)a1 actionType:(int)a2 exit:(BOOL)a3 enterScene:(unsigned long long)a4 postSourceType:(unsigned long long)a5;
- (void)triggerReport;
- (void)triggerCustomKey:(id)a0 enterScene:(unsigned long long)a1;
- (void)triggerCustomKey:(id)a0 postSession:(id)a1;
- (void)triggerCustomKey:(id)a0 enterScene:(unsigned long long)a1 videoDuration:(double)a2 fileSize:(double)a3;
- (void)triggerTraceKey:(id)a0 customKey:(id)a1 postSession:(id)a2;
- (void)triggerCustomKey:(id)a0 postSession:(id)a1 cdnErrorCode:(long long)a2;
- (void)triggerCustomKey:(id)a0 failCode:(long long)a1 failErr:(id)a2 postSession:(id)a3;
- (id)genTraceKeyByCustomKey:(id)a0 postSession:(id)a1;
- (void)beginReportByTraceKey:(id)a0 customKey:(id)a1 clientInfo:(id)a2 cgiFailErrCode:(long long)a3 cgiFailErrMsg:(id)a4 postSession:(id)a5;
- (void)beginReportByTraceKey:(id)a0 customKey:(id)a1 clientInfo:(id)a2 cgiFailErrCode:(long long)a3 cgiFailErrMsg:(id)a4 enterScene:(unsigned long long)a5 mediaType:(unsigned long long)a6 videoPlayLength:(long long)a7 videoFileSize:(long long)a8 mediaCount:(long long)a9 feedId:(id)a10;
- (id)getPostExtReportSvrValue;
- (void).cxx_destruct;

@end
