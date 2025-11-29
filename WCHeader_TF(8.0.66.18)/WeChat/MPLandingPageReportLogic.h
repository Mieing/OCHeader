@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MPLandingPageReportLogicDelegate;

@interface MPLandingPageReportLogic : MMObject <PBMessageObserverDelegate>

@property (copy, nonatomic) NSString *bizUsrName;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int sessionId;
@property (copy, nonatomic) NSString *channelSessionId;
@property (nonatomic) unsigned int landingPageType;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) unsigned long long enterTimeInMs;
@property (nonatomic) unsigned long long exitTimeInMs;
@property (nonatomic) unsigned int mid;
@property (nonatomic) unsigned int idx;
@property (nonatomic) unsigned long long bufferingStartTimeInMs;
@property (weak, nonatomic) id<MPLandingPageReportLogicDelegate> delegate;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subscene;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int enterId;
@property (nonatomic) unsigned int webPageId;
@property (retain, nonatomic) NSMutableArray *performanceReportDataArr;
@property (retain, nonatomic) NSMutableDictionary *performanceReportCtxDict;

- (void)updateWebPageId:(unsigned int)a0;
- (void)reportSimplePerformanceEvent:(unsigned long long)a0;
- (void)reportSimplePerformanceEvent:(unsigned long long)a0 extraDict:(id)a1;
- (void)reportPerformanceEventBegin:(unsigned long long)a0 extraDict:(id)a1;
- (void)reportPerformanceEventEnd:(unsigned long long)a0 extraDict:(id)a1;
- (void)reportPerformanceEventBegin:(unsigned long long)a0;
- (void)reportPerformanceEventEnd:(unsigned long long)a0;
- (id)dataReportWithDict:(id)a0;
- (id)convertDict2ReportItemArr:(id)a0;
- (void)dealloc;
- (id)initWithOpenParam:(id)a0 enterId:(unsigned int)a1 sessionId:(unsigned int)a2 delegate:(id)a3;
- (void)updateOpenParam:(id)a0;
- (void)updateVideoDuration:(float)a0;
- (void)updateSessionId:(unsigned int)a0;
- (void)updateLandingPageType:(unsigned int)a0;
- (void)onEnterLandingPage;
- (void)onLeaveLandingPage;
- (void)report10945;
- (void)reportShareAction:(unsigned int)a0;
- (void)reportShareAction:(unsigned int)a0 extInfo:(id)a1;
- (unsigned int)convertItemShowTypeTo10380Type;
- (void)reportVideoPagePlayEvent:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)checkCGIBaseRespSuccess:(id)a0;
- (int)getNetWorkIntType;
- (id)getNetWorkStrType;
- (void)reportEnterVideoPageEvent;
- (void)reportExitVideoPageEvent:(unsigned long long)a0 playRealTime:(unsigned long long)a1 isFullScreen:(BOOL)a2;
- (void)reportPlayErrEventWithErrCode:(int)a0 isFullScreen:(BOOL)a1 currPlayedTimeMs:(unsigned long long)a2;
- (void)reportVideoPageCommonEvent:(unsigned int)a0 currPlayedTimeMs:(unsigned long long)a1 isFullScreen:(BOOL)a2;
- (void)onVideoBeginBuffering:(BOOL)a0;
- (void)onVideoEndBuffering:(BOOL)a0 currPlayedTimeMs:(unsigned long long)a1 isFullScreen:(BOOL)a2;
- (void)reportVideoPagePlayBufferEvent:(unsigned int)a0 bufferTimeInMs:(unsigned long long)a1 currPlayedTimeMs:(unsigned long long)a2 isFullScreen:(BOOL)a3;
- (void)reportClickRightTopMoreBtn:(BOOL)a0 videoCurrTimeInSecond:(double)a1;
- (void)reportClickDefinitionBtnWithVideoCurrTimeInSecond:(double)a0 definitionOptionsStr:(id)a1;
- (id)genDefaultKvReportItem17149;
- (unsigned int)isFans;
- (void).cxx_destruct;

@end
