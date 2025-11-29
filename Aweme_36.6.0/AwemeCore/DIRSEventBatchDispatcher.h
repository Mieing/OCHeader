@class NSString, NSHashTable, NSObject, DIRSContext;
@protocol IRISServiceSchema, IRISDataCoder, OS_dispatch_queue, IRISEventUploadExecutor;

@interface DIRSEventBatchDispatcher : DIRSBasicModule <IRISApplicationObserver, IRISIdentifierObserver, IRISEventObserver, IRISEventRealtimeHandler, IRISConfigurationObserver, IRISContextObserver> {
    BOOL _isEnabled;
    id<IRISEventUploadExecutor> defaultExecutor;
    id<IRISServiceSchema> schema;
    id<IRISEventUploadExecutor> realtimeExecutor;
    id<IRISServiceSchema> schema_realtime;
    long long encMethod;
    NSHashTable *sequentialCompressors;
    id<IRISDataCoder> defaultCompressor;
    id<IRISDataCoder> primaryCompressor;
    id<IRISDataCoder> encryptor;
    id<IRISDataCoder> decryptor;
    NSHashTable *executorRefs;
    unsigned long long strategies;
    NSObject<OS_dispatch_queue> *intervalBatchQueue;
}

@property (nonatomic) unsigned long long bgTask;
@property (readonly, nonatomic) id<IRISServiceSchema> schema;
@property (readonly) id<IRISEventUploadExecutor> defaultUploader;
@property (readonly) id<IRISEventUploadExecutor> realtimeUploader;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleVersion;

- (void)onRemoteSettingsDidUpdate:(id)a0;
- (void)onRealtimeSettingsDidUpdate:(id)a0;
- (id)compressors;
- (void)onIdentifierAvailable;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (void)onFinishLaunching:(id)a0;
- (id)createExecutor;
- (id)allExecutors;
- (void)onLaunch;
- (void)applyCompressionSettings;
- (id)allExecutor;
- (id)intervalBatchQueue;
- (void)onLaunchEvent:(id)a0;
- (void)onTerminateEvent:(id)a0;
- (void)onRealtimeEventRecieved;
- (id)executionQueue;
- (void).cxx_destruct;
- (void)stop;
- (void)commonInit;
- (void)run;
- (void)endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (id)encryptor;
- (id)decryptor;

@end
