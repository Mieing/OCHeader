@class HTSGLContext, NSString, NSLock;

@interface VEFence : NSObject <IVEFence> {
    struct __GLsync { } *_fence;
    NSLock *_fenceLock;
    struct handle_DeviceSequence_t { } *_deviceSequence;
    struct handle_DeviceFence_t { } *_deviceFence;
}

@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) BOOL enableAgfxContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fenceSync;
- (void)waitSync;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
