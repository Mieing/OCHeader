@class NSMutableArray;

@interface WCFinderPrefetchTaskManager : NSObject

@property (retain, nonatomic) NSMutableArray *requestingTaskArray;
@property (retain, nonatomic) NSMutableArray *waitingTaskArray;
@property (nonatomic) unsigned long long maxRequestNum;

- (void)safeAddPrefetchTask:(id)a0;
- (void)requestIfCan;
- (void).cxx_destruct;

@end
