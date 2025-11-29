@class NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HMDLimitReportDataSizeToolDelegate;

@interface HMDReportLimitSizeTool : NSObject <HMDReportSizeLimitManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue;
@property (retain, nonatomic) NSMutableDictionary *visitorTimeRangeDict;
@property (retain, nonatomic) NSMutableSet *muduleSet;
@property (weak, nonatomic) id<HMDLimitReportDataSizeToolDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldSizeLimit;
- (void)estimateSizeWithStoreObjectRecord:(id)a0 recordClass:(Class)a1 module:(id)a2;
- (void)estimateSizeWithMonitorRecords:(id)a0 recordClass:(Class)a1 module:(id)a2;
- (void)estimateSizeWithDictArray:(id)a0 module:(id)a1;
- (BOOL)accumulationDataLengthWithData:(id)a0;
- (void)currentSizeOutOfThreshold;
- (void)hmdReportSizeLimitManagerStart;
- (void)hmdReportSizeLimitManagerStop;
- (void)addNeedLimitReportSizeRecordClass:(id)a0;
- (void)addNeedLimitReportSizeRecordClasses:(id)a0;
- (void)removeReportSizeRecordClass:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
