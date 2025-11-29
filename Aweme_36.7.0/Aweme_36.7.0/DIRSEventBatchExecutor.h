@class NSArray, NSDictionary, NSString, DIRSContext;
@protocol IRISEventStore, IRISServiceSchema, IRISDataCoder, IRISThrottlter;

@interface DIRSEventBatchExecutor : DIRSBasicModule <IRISTimer, IRISEventUploadExecutor> {
    unsigned long long batchId;
}

@property (readonly, nonatomic) double timerInterval;
@property (nonatomic) double interval;
@property (weak, nonatomic) id<IRISServiceSchema> serializer;
@property (retain, nonatomic) NSArray *compressors;
@property (weak, nonatomic) id<IRISDataCoder> encryptor;
@property (weak, nonatomic) id<IRISDataCoder> decryptor;
@property (weak, nonatomic) id<IRISEventStore> eventStore;
@property (retain, nonatomic) id<IRISThrottlter> throttlter;
@property (nonatomic) long long priority;
@property (nonatomic) long long execState;
@property (retain, nonatomic) NSDictionary *options;
@property double tickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)onTimerTick;
- (void)executeUpload:(long long)a0;
- (void)_executeUpload:(long long)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_executeUpload:(long long)a0 options:(id)a1;
- (BOOL)_allowBatch:(id *)a0;
- (void)executeUpload:(long long)a0 options:(id)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)commonInit;
- (void)start;

@end
