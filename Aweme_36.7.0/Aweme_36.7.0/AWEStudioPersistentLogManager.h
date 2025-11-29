@class NSString;

@interface AWEStudioPersistentLogManager : NSObject <ACCCreativePathMessage, AWEPublishTaskMessage>

@property (class, readonly, nonatomic) AWEStudioPersistentLogManager *shared;

@property (nonatomic) BOOL running;
@property (nonatomic) double lastUploadTime;
@property (nonatomic) BOOL didCleanup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)didBecomeActiveNotification:(id)a0;
- (void)exitCreativePath;
- (void)uploadLogsIfNeeded;
- (void)p_safeStart;
- (void)p_cleanupIfNeeded;
- (void)p_uploadLogs:(id)a0;
- (id)init;
- (void)dealloc;

@end
