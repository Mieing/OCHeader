@class NSMutableDictionary, NSMutableArray;

@interface AWEProductDetectRequestTaskCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestTaskMap;
@property (retain, nonatomic) NSMutableArray *pendingTasks;

+ (id)defaultCenter;

- (void)networkingReachabilityDidChange:(id)a0;
- (void)replayRequests;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
