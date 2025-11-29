@class MMLiveFlowCancelationSource, NSString, MMLiveFlowCancelationToken, NSMutableArray, MMLiveResourceFetcherTaskStatusInfo;

@interface MMLiveResourceFetcherTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *resourceUri;
@property (retain, nonatomic) NSString *cachingPath;
@property (retain, nonatomic) NSString *downloadWorkingPath;
@property (retain, nonatomic) NSString *digestPath;
@property (readonly, nonatomic) NSMutableArray *pinnedPaths;
@property (retain, nonatomic) MMLiveFlowCancelationSource *cancelationSource;
@property (nonatomic) struct { long long priorityClass; long long priorityValue; } priorityStorage;
@property (retain, nonatomic) MMLiveResourceFetcherTaskStatusInfo *status;
@property (nonatomic) unsigned long long integrityValidationType;
@property (retain, nonatomic) NSString *expectedDigest;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) MMLiveFlowCancelationToken *cancelationToken;
@property (readonly, nonatomic) BOOL cancelationRequested;
@property (nonatomic) struct { long long x0; long long x1; } priority;

+ (void)batchSetPriorityWithBlock:(id /* block */)a0;

- (id)initWithResourceUri:(id)a0 cachingPath:(id)a1;
- (void)cancel;
- (void).cxx_destruct;

@end
