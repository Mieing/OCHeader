@class NSArray;

@interface HMDPerformanceReportRequest : NSObject

@property (nonatomic) unsigned long long limitCount;
@property (nonatomic) unsigned long long limitCountFromMemory;
@property (retain, nonatomic) NSArray *dataAndConditions;
@property (retain, nonatomic) NSArray *dataOrConditions;
@property (nonatomic) struct HMDRecordLocalIDRange { unsigned long long minLocalID; unsigned long long maxLocalID; } uploadingRange;

- (void).cxx_destruct;

@end
