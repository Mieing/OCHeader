@class NSArray, NSString, NSTimer, NSMutableArray;

@interface AWEMessageReachComponentPrecheckTask : NSObject

@property (nonatomic) BOOL hasExecute;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSArray *verifyList;
@property (retain, nonatomic) NSMutableArray *preCheckResult;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSTimer *requestTimer;

+ (id)createTaskWithCompletion:(id /* block */)a0 verifyList:(id)a1 channelID:(id)a2 paramsContext:(id)a3;

- (void)handleComponentVerifyTimeout;
- (void)taskPrecheckFinish;
- (void)trackComponentPrecheckTimeout;
- (void)taskStartPrecheck;
- (void)addVerifyResult:(id)a0;
- (void)handleComponentCountExceed:(unsigned long long)a0;
- (void).cxx_destruct;

@end
