@class NSString, SECFileHandler, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWESECEventFlowLogReporter : NSObject <SECEventFlowEventLogger> {
    NSObject<OS_dispatch_queue> *_uploadTriggerQueue;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
}

@property (retain, nonatomic) NSMutableArray *buffer;
@property (retain, nonatomic) SECFileHandler *currentFileHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)logEventDesc:(id)a0;
- (void)logUploadTrigger:(id)a0 safetyType:(id)a1;
- (void)createCurrentFileHandler;
- (void)uploadLastLogFromFile;
- (void)uploadWithLogArray:(id)a0 status:(id)a1 triggerType:(id)a2 isEnd:(BOOL)a3;
- (void)clearBufferToStorage;
- (void)_logUploadTrigger:(id)a0 safetyType:(id)a1;
- (unsigned long long)_hitStrategy:(id)a0 params:(id)a1;
- (unsigned long long)_hitMonitorStrategy:(id)a0 hitScene:(id)a1;
- (void)uploadIncrementLogsFromCurrentStorageWithTriggerType:(id)a0;
- (BOOL)_hitSceneToMonitorStrategy:(id)a0 hitScene:(id)a1;
- (void)writeLogsToCurrentFile:(id)a0;
- (void)_uploadIncrementLogsFromCurrentFileWithTriggerType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
