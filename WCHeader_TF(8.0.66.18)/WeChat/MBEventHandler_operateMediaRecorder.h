@class NSString;

@interface MBEventHandler_operateMediaRecorder : MBEventHandlerBaseAsync <WAOpenGlCaptureDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)apiName;
- (void)invoke:(id)a0;
- (void)start:(id)a0 opId:(id)a1;
- (void)stop:(id)a0 opId:(id)a1;
- (void)abort:(id)a0 opId:(id)a1;
- (void)pause:(id)a0 opId:(id)a1;
- (void)resume:(id)a0 opId:(id)a1;
- (void)callbackErrMsg:(id)a0;
- (void)removeCtxForOpId:(id)a0;
- (void)onScreenCapture:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer { } *)a3;
- (void)onScreenCapture:(unsigned int)a0 data:(void *)a1 size:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 bitsPerComponent:(unsigned long long)a5 bytesPerRow:(unsigned long long)a6 format:(int)a7;
- (BOOL)invokeInMainThread;

@end
