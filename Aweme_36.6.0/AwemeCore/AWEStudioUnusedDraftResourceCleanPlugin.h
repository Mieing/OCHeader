@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioUnusedDraftResourceCleanPlugin : NSObject <AWEPerfResourceCleanStrategy>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialCleanQueue;
@property (copy, nonatomic) id /* block */ currentCleanTask;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) BOOL launchIdleStudioTaskCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (void)cancelCleanTask;
- (void)cleanDirectoryContentsAtPath:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)dealloc;

@end
