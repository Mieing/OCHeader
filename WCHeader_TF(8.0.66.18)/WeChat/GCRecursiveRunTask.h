@class NSString, NSMutableArray, NSMutableDictionary;

@interface GCRecursiveRunTask : NSObject

@property (copy, nonatomic) id /* block */ recursiveBlock;
@property (nonatomic) BOOL isEnd;
@property (copy, nonatomic) id /* block */ onResultBlock;
@property (copy, nonatomic) id /* block */ checkResultValidBlock;
@property (nonatomic) long long runSeq;
@property (nonatomic) double lastRunTime;
@property (retain, nonatomic) NSMutableArray *runInfoArray;
@property (retain, nonatomic) NSMutableDictionary *receiveInfoDict;
@property (retain, nonatomic) NSString *lastVersion;
@property (nonatomic) BOOL needReRunWhenPauseResume;
@property (retain, nonatomic) NSString *taskDesc;
@property (nonatomic) double delaySecondsForInvalidResult;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) NSString *curRunInformation;
@property (nonatomic) BOOL isWaitForResponse;

- (id)initWithBlock:(id /* block */)a0;
- (void)logStr:(id)a0;
- (void)logWithForamt:(id)a0;
- (id)recordInfoForSeq:(id)a0;
- (void)run;
- (void)onTaskCompleteWithResult:(id)a0;
- (void)appendAdditionalInfo:(id)a0;
- (void)onTaskCompleteWithResult:(id)a0 version:(id)a1;
- (void)runWithDelaySeconds:(double)a0;
- (void)exit:(id)a0;
- (void)dealloc;
- (id)description;
- (id)runTimeDesc;
- (void).cxx_destruct;

@end
