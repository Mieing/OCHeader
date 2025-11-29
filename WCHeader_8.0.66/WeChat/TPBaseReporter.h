@class NSString, NSMutableDictionary, NSPointerArray, TPCommonParams, TPPlayerLogContext, TPDiskReadWrite, TPReporterInitParams;
@protocol ITPReportWrapper, ITPReportInfoGetter, ITPPlayerInfoGetter;

@interface TPBaseReporter : NSObject <ITPReporter>

@property (weak, nonatomic) id<ITPReportInfoGetter> reportInfoGetter;
@property (weak, nonatomic) id<ITPPlayerInfoGetter> playerInfoGetter;
@property (retain, nonatomic) NSPointerArray *reportChannelDelegates;
@property (retain, nonatomic) TPCommonParams *commonParams;
@property (retain, nonatomic) NSMutableDictionary *extInitParams;
@property (retain, nonatomic) NSMutableDictionary *rsvExtInitParams;
@property (nonatomic) long long reportEventSeq;
@property (retain, nonatomic) NSMutableDictionary *playerConfigKeyValueDic;
@property (retain, nonatomic) id<ITPReportWrapper> beaconReporter;
@property (retain, nonatomic) TPPlayerLogContext *log;
@property (retain, nonatomic) TPDiskReadWrite *diskReadWrite;
@property (retain, nonatomic) TPReporterInitParams *reporterInitParams;
@property (readonly, nonatomic) int reporterInstanceBaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calcDrmCapability:(id)a0;

- (id)init;
- (void)setup:(id)a0;
- (void)addReportChannelListener:(id)a0;
- (void)onEvent:(unsigned long long)a0 withEvent:(id)a1;
- (void)reset;
- (void)dumpInfo:(id)a0 withDictionary:(id)a1;
- (void)reportToExternalReportChannelIfNeed:(id)a0 withDictionary:(id)a1;
- (id)getGeneralPlayFlowParamsFromCore;
- (id)getDynamicStatisticParamsFromCore:(BOOL)a0;
- (id)getLivePeriodExtendReportInfo;
- (void)cacheReport:(id)a0 withParams:(id)a1;
- (void)removeCachedReport:(id)a0;
- (void)removeCachedReports;
- (void)reportEvent:(id)a0 withParams:(id)a1;
- (void)reportAndClearCache;
- (void)classifyDicIntoRsvExtMapAndExtMap:(id)a0 withRsvExtDic:(id)a1 withExtDic:(id)a2;
- (void)onDTProcessUpdate:(id)a0;
- (void)onDTCdnUrlUpdate:(id)a0;
- (void)onDTProtocolUpdate:(id)a0;
- (void)getCoreCommonParams;
- (void)getInitExtParams;
- (void)initDeviceParams;
- (id)reportSafeString:(id)a0;
- (void).cxx_destruct;

@end
