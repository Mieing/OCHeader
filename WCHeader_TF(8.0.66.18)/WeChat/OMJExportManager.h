@class NSObject;
@protocol OS_dispatch_queue, OMJExportManagerDelegate;

@interface OMJExportManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct SharedPtr<XMFVideoFrameCocoaLoader> { struct XMFVideoFrameCocoaLoader *_ptr; } thumbnailLoader;
@property (nonatomic) struct SharedPtr<XMJExportManager> { struct XMJExportManager *_ptr; } backingManager;
@property (weak, nonatomic) id<OMJExportManagerDelegate> delegate;

- (id)initWithBackingManager:(const void *)a0;
- (id)taskWithClipBundleID:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 exportSettings:(id)a2;
- (id)cancelTaskWithID:(id)a0;
- (id)pauseTaskWithID:(id)a0;
- (id)startTaskWithID:(id)a0;
- (void)pauseService;
- (void)resumeService;
- (BOOL)isServicePaused;
- (id)allScheduledTaskIDs;
- (id)allPausedTaskIDs;
- (void)setupExportStateDidChangeFunc;
- (void)onDidUpdateVideoFrame:(struct SharedPtr<XMFVideoFrame> { struct XMFVideoFrame *x0; })a0 taskID:(id)a1 handler:(id /* block */)a2;
- (void)enableVideoFrameNotificationWithTaskID:(id)a0 notifyInterval:(double)a1;
- (void)disableVideoFrameNotificationWithTaskID:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
