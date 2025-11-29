@class HMInstance, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDCPUExceptionRecordManagerDelegate;

@interface HMDCPUExceptionRecordManager : NSObject

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSMutableArray *reportedRecordUUIDs;
@property (retain, nonatomic) NSMutableArray *cacheCompareRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue;
@property (retain, nonatomic) HMInstance *instance;
@property (nonatomic) BOOL ignoreDuplicate;
@property (nonatomic) BOOL isRecordFromStore;
@property (weak, nonatomic) id<HMDCPUExceptionRecordManagerDelegate> delegate;

- (BOOL)needDropData;
- (void)pushRecord:(id)a0 needUploadImmediately:(BOOL)a1;
- (void)receiveMemroyWarning:(id)a0;
- (id)cpuExceptionReprotDataWithRecords:(id)a0;
- (void)cpuExceptionReportCompletion:(BOOL)a0;
- (id)cpuExceptionReportData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupData;
- (BOOL)storeRecords;

@end
