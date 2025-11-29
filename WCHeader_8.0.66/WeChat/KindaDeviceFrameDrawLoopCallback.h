@class NSString, MMVoidI64Callback, CADisplayLink;

@interface KindaDeviceFrameDrawLoopCallback : NSObject <MMIDeviceFrameDrawLoopCallback> {
    CADisplayLink *displayLink;
    MMVoidI64Callback *frameDrawCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startListenerImpl:(id)a0;
- (void)stopListener;
- (void)onFrameDraw;
- (void)dealloc;
- (void).cxx_destruct;

@end
