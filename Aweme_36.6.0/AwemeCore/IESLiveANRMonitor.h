@class IESLiveANRRecord, HMDANRSDKMonitor, NSString, NSMutableArray;

@interface IESLiveANRMonitor : NSObject <HMDANRSDKMonitorDelegate>

@property (retain, nonatomic) HMDANRSDKMonitor *anrMonitor;
@property (nonatomic) double recordInterval;
@property (retain, nonatomic) NSMutableArray *anrRecords;
@property (retain, nonatomic) IESLiveANRRecord *summaryRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBlockWithDuration:(double)a0;
- (void)updateRecordWithAnrDuration:(double)a0;
- (id)popRecentRecord;
- (id)getSummaryRecord;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
