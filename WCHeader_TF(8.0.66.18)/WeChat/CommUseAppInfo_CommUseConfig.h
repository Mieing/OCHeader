@class NSString, NSMutableArray, CommUseAppInfo_CommUseConfig_CommUseWording;

@interface CommUseAppInfo_CommUseConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *referInfo;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int historyShowType;
@property (nonatomic) BOOL refreshImmediately;
@property (nonatomic) unsigned int noResponseMsWhenRefresh;
@property (retain, nonatomic) NSString *nextReqExtraData;
@property (nonatomic) unsigned int updateLoadingWaitMs;
@property (nonatomic) BOOL reportSsid;
@property (nonatomic) BOOL reportLocation;
@property (nonatomic) unsigned int getLocaltionWaitMs;
@property (retain, nonatomic) NSString *overviewExtraData;
@property (nonatomic) unsigned int nextReqIntervalS;
@property (retain, nonatomic) CommUseAppInfo_CommUseConfig_CommUseWording *commuseWording;

+ (void)initialize;

- (void)setCommuseWording:(id)a0;
- (id)commuseWording;
- (void)setNextReqIntervalS:(unsigned int)a0;
- (unsigned int)nextReqIntervalS;
- (void)setOverviewExtraData:(id)a0;
- (id)overviewExtraData;
- (void)setGetLocaltionWaitMs:(unsigned int)a0;
- (unsigned int)getLocaltionWaitMs;
- (void)setReportLocation:(BOOL)a0;
- (BOOL)reportLocation;
- (void)setReportSsid:(BOOL)a0;
- (BOOL)reportSsid;
- (void)setUpdateLoadingWaitMs:(unsigned int)a0;
- (unsigned int)updateLoadingWaitMs;
- (void)setNextReqExtraData:(id)a0;
- (id)nextReqExtraData;
- (void)setNoResponseMsWhenRefresh:(unsigned int)a0;
- (unsigned int)noResponseMsWhenRefresh;
- (void)setRefreshImmediately:(BOOL)a0;
- (BOOL)refreshImmediately;
- (void)setHistoryShowType:(unsigned int)a0;
- (unsigned int)historyShowType;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;
- (void)setReferInfo:(id)a0;
- (id)referInfo;

@end
