@class NSDictionary, BDUGLuckyMemoryMonitorSettingsEntryModel, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BDUGLuckyMemoryMonitorRecorder : NSObject

@property (nonatomic) unsigned long long memoryAppBefore;
@property (nonatomic) unsigned long long memoryAvailableBefore;
@property (nonatomic) unsigned long long memoryAppRecordMax;
@property (nonatomic) unsigned long long memoryAvailableRecordMin;
@property (nonatomic) unsigned long long memoryAppRecordStable;
@property (nonatomic) unsigned long long memoryAvailableRecordStable;
@property (nonatomic) unsigned long long memoryAppRecordLast;
@property (nonatomic) unsigned long long memoryAvailableRecordLast;
@property (retain, nonatomic) NSMutableArray *memoryAppRecords;
@property (retain, nonatomic) NSMutableArray *memoryAvailableRecords;
@property (nonatomic) double memoryRecordBeginTime;
@property (nonatomic) int memoryAppStableCounter;
@property (nonatomic) int memoryAvailableStableCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryRecordTimer;
@property (nonatomic) unsigned long long memoryRecordTimerCounter;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } memoryRecordLock;
@property (nonatomic) BOOL memoryRecordRunning;
@property (retain, nonatomic) BDUGLuckyMemoryMonitorSettingsEntryModel *config;
@property (copy, nonatomic) NSDictionary *pageInfo;
@property (copy, nonatomic) id /* block */ recordCompletion;

- (id)initWithConfig:(id)a0 pageInfo:(id)a1;
- (BOOL)__terminateRecordTimer;
- (void)recordMemoryBeforeJump;
- (void)__resetRecordData;
- (void)__resetRecordTimer;
- (id)__bytesToMBStringFixed:(long long)a0;
- (id)__endRecordMemoryAfterJumpAndBuildReportWithEndTime:(double)a0;
- (void)__recordMemoryAfterJump;
- (id)__bytesToMB:(long long)a0;
- (void)beginRecordMemoryAfterJump;
- (void)terminateRecordMemoryAfterJump;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
