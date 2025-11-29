@interface MBMediaServiceWrapper : NSObject {
    struct IMediaSdkWrapper { void /* function */ **x0; } *sdk_wrapper;
}

- (id)init;
- (void)dealloc;
- (struct IMediaSdkWrapper { void /* function */ **x0; } *)GetSdkWrapper;
- (int)getEventType:(id)a0;
- (void)addEventNotifier:(id)a0 callback:(id /* block */)a1;
- (void)delEventNotifier:(id)a0;
- (void)addContainerNotifier:(unsigned int)a0 callback:(id /* block */)a1;
- (void)delContainerNotifier:(unsigned int)a0;
- (void)addNotifyCallbacker:(unsigned int)a0 callback:(id /* block */)a1;
- (void)delNotifyCallbacker:(unsigned int)a0;
- (void)writerCreate:(id)a0 callback:(id /* block */)a1;
- (void)writerStart:(id)a0 callback:(id /* block */)a1;
- (void)writerVideo:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 format:(int)a3 width:(unsigned int)a4 height:(unsigned int)a5 horizonalFlip:(BOOL)a6 verticalFlip:(BOOL)a7 cts:(unsigned long long)a8;
- (void)writerAudio:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 format:(int)a3 channel:(int)a4 samplerate:(int)a5 cts:(unsigned long long)a6;
- (void)writerUpdate:(id)a0 callback:(id /* block */)a1;
- (void)writerStop:(id)a0 callback:(id /* block */)a1;
- (void)writerRemove:(id)a0 callback:(id /* block */)a1;

@end
