@class NSString, NSDictionary, BDPUniqueID, BDPTimingEvent;
@protocol BDPBootLogDataSource;

@interface BDPBootLogger : NSObject <BDPBootLifeCycleMessage> {
    unsigned long long _timeOfMpLaunch;
    unsigned long long _durationOfMpLaunch;
}

@property (copy, nonatomic) NSString *loadErrorCode;
@property (weak, nonatomic) id<BDPBootLogDataSource> dataSource;
@property (nonatomic) BOOL fmpHasReported;
@property (nonatomic) BOOL nativeLcpHasReported;
@property (nonatomic) BOOL loadResultHasReported;
@property (nonatomic) long long backgroundTimes;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSDictionary *feedGameParams;
@property (nonatomic) BOOL hasEnteredBackGround;
@property (retain, nonatomic) BDPTimingEvent *loadTimingEvent;
@property (retain, nonatomic) BDPTimingEvent *launchTimingEvent;
@property (copy, nonatomic) NSString *exitType;
@property (copy, nonatomic) NSString *preloadCacheRemoveReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)bootType;
- (void)applicationFMP:(id)a0;
- (id)launchParam;
- (id)loadInstance;
- (void)updateCommonParamsWithMeta:(id)a0;
- (id)blankEventAttributes;
- (void)reportTimelineAppInfo:(id)a0 reader:(id)a1;
- (void)eventMpLaunchWithParams:(id)a0;
- (void)enentMpOpen:(BOOL)a0;
- (void)buildNewCommonParams;
- (void)eventFMP;
- (void)eventXScreenConfigsIfNeededWithAttributes:(id)a0;
- (void)eventMpSessionLaunch;
- (id)eventSubscribeAuthTypeFromServer:(id)a0;
- (void)eventSchemaInfoWithSchema:(id)a0 error:(id)a1;
- (void)eventMpEntranceClick:(BOOL)a0;
- (void)eventMpEnterWithParams:(id)a0;
- (void)eventMpExitWithParams:(id)a0;
- (void)eventMpLoadStart;
- (id)eventMpLoadResult:(unsigned long long)a0 error:(id)a1 extraParams:(id)a2;
- (void)eventMpMetaUpdateLoadResult:(unsigned long long)a0 errMsg:(id)a1 extraParams:(id)a2;
- (void)eventMpLaunchResultWithParams:(id)a0;
- (void)eventNativeContentfulPaintWithParams:(id)a0 timestamp:(double)a1 startTime:(double)a2;
- (void)eventMpApplyAsyncUpdate;
- (void)eventMpAsyncUpdateReadyNotify;
- (void)eventWarmBootResult:(BOOL)a0 duration:(double)a1 errMsg:(id)a2;
- (void)monitorLoadError:(id)a0 errorCodeStr:(id)a1;
- (id)schema;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)dealloc;

@end
