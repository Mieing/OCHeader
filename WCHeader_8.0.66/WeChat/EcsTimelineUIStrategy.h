@class NSString;

@interface EcsTimelineUIStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned int uiVersion;
@property (nonatomic) unsigned int subscribeCountLowerLimit;
@property (retain, nonatomic) NSString *commentPageQuery;
@property (nonatomic) BOOL openSubscribe;
@property (nonatomic) unsigned int requestFrequencyTime;
@property (nonatomic) unsigned int notifyRequestFrequencyTime;
@property (nonatomic) BOOL liveAutoplay;
@property (nonatomic) unsigned int requestMassMsgCount;
@property (nonatomic) unsigned int notifyMsgRequestFrequencyTime;
@property (nonatomic) unsigned int mainTabRequestFrequencyTime;
@property (nonatomic) unsigned int poiReportFrequencyTime;
@property (nonatomic) unsigned int reliableNotifyRequestFrequencyTime;
@property (retain, nonatomic) NSString *strategyBuffer;

+ (void)initialize;

- (void)setStrategyBuffer:(id)a0;
- (id)strategyBuffer;
- (void)setReliableNotifyRequestFrequencyTime:(unsigned int)a0;
- (unsigned int)reliableNotifyRequestFrequencyTime;
- (void)setPoiReportFrequencyTime:(unsigned int)a0;
- (unsigned int)poiReportFrequencyTime;
- (void)setMainTabRequestFrequencyTime:(unsigned int)a0;
- (unsigned int)mainTabRequestFrequencyTime;
- (void)setNotifyMsgRequestFrequencyTime:(unsigned int)a0;
- (unsigned int)notifyMsgRequestFrequencyTime;
- (void)setRequestMassMsgCount:(unsigned int)a0;
- (unsigned int)requestMassMsgCount;
- (void)setLiveAutoplay:(BOOL)a0;
- (BOOL)liveAutoplay;
- (void)setNotifyRequestFrequencyTime:(unsigned int)a0;
- (unsigned int)notifyRequestFrequencyTime;
- (void)setRequestFrequencyTime:(unsigned int)a0;
- (unsigned int)requestFrequencyTime;
- (void)setOpenSubscribe:(BOOL)a0;
- (BOOL)openSubscribe;
- (void)setCommentPageQuery:(id)a0;
- (id)commentPageQuery;
- (void)setSubscribeCountLowerLimit:(unsigned int)a0;
- (unsigned int)subscribeCountLowerLimit;
- (void)setUiVersion:(unsigned int)a0;
- (unsigned int)uiVersion;

@end
