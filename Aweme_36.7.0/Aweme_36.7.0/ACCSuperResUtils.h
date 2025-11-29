@class NSMutableDictionary, NSString, NSObject, TEBMFAlgoProcessor;
@protocol OS_dispatch_queue;

@interface ACCSuperResUtils : NSObject

@property (retain, nonatomic) TEBMFAlgoProcessor *processor;
@property (retain, nonatomic) NSMutableDictionary *completionHandlers;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (retain, nonatomic) NSMutableDictionary *fileTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) long long taskCounter;
@property (nonatomic) long long lastErrorCode;
@property (copy, nonatomic) NSString *lastErrorMessage;

+ (id)shared;

- (id)detect:(id)a0 atSampledRatio:(double)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)setupWithCompletion:(id /* block */)a0;
- (id)detect:(id)a0 completion:(id /* block */)a1;
- (void)handleError:(long long)a0 errorMessage:(id)a1 filePath:(id)a2 completion:(id /* block */)a3;
- (id)detectWithImage:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (id)generateSequenceId;
- (void)handleScoreResult:(id)a0 forSequenceId:(id)a1 extra:(id)a2;
- (void)handleProcessFailedForSequenceId:(id)a0 errorMessage:(id)a1 extra:(id)a2;
- (void)triggerTotalCompletion:(id /* block */)a0;
- (id)randomSampleFromArray:(id)a0 count:(unsigned long long)a1;
- (void)scoreTimeout:(id /* block */)a0;
- (void)releaseResources:(BOOL)a0;
- (id)detectWithImage:(id)a0 completion:(id /* block */)a1;
- (void)cancelDetection:(id)a0;
- (void).cxx_destruct;
- (void)releaseResources;
- (id)init;

@end
