@class SECURLRelatedLogStore;
@protocol SECInterestLogStash;

@interface SECSafetyLogStore : NSObject

@property (retain, nonatomic) id<SECInterestLogStash> logStash;
@property (retain, nonatomic) SECURLRelatedLogStore *urlReatedStore;

+ (id)createURLAsyncLogStashWithName:(id)a0;
+ (id)fetchLogStash;
+ (void)setupLogStash:(id)a0;
+ (id)fetchURLSyncLogStash;
+ (id)fetchURLAsyncLogStash;
+ (void)setupWithDefaultLogStash;
+ (void)writeRelatedLogs:(id)a0 toStash:(id)a1;
+ (id)logsForURL:(id)a0 before:(double)a1 fromStash:(id)a2;
+ (id)logsForURL:(id)a0 between:(double)a1 andTime:(double)a2 fromStash:(id)a3;
+ (void)setupWithURLRelatedStore:(double)a0 asyncCleanInterval:(double)a1;
+ (id)zipLog:(id)a0;

- (void).cxx_destruct;

@end
