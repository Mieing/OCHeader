@interface MMMediaServiceWrapper : NSObject {
    struct IMediaSdkWrapper { void /* function */ **x0; } *sdk_wrapper;
}

@property BOOL audioplaying;

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
- (void)SwitchBackground:(id)a0;
- (void)test:(id)a0 callback:(id /* block */)a1;
- (void)analysis:(id)a0 callback:(id /* block */)a1;
- (void)remux:(id)a0 callback:(id /* block */)a1;
- (void)thumb:(id)a0 callback:(id /* block */)a1;
- (void)playerCheck:(id /* block */)a0;
- (void)playerCreate:(id)a0 callback:(id /* block */)a1;
- (void)playerAddTask:(id)a0 callback:(id /* block */)a1;
- (void)playerDelTask:(id)a0 callback:(id /* block */)a1;
- (void)playerStart:(id)a0 callback:(id /* block */)a1;
- (void)playerUpdate:(id)a0 callback:(id /* block */)a1;
- (void)playerStop:(id)a0 callback:(id /* block */)a1;
- (void)playerRemove:(id)a0 callback:(id /* block */)a1;
- (void)writerCreate:(id)a0 callback:(id /* block */)a1;
- (void)writerStart:(id)a0 callback:(id /* block */)a1;
- (void)writerVideo:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 format:(int)a3 width:(unsigned int)a4 height:(unsigned int)a5 horizonalFlip:(BOOL)a6 verticalFlip:(BOOL)a7 cts:(unsigned long long)a8;
- (void)writerAudio:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 format:(int)a3 channel:(int)a4 samplerate:(int)a5 cts:(unsigned long long)a6;
- (void)writerUpdate:(id)a0 callback:(id /* block */)a1;
- (void)writerStop:(id)a0 callback:(id /* block */)a1;
- (void)writerRemove:(id)a0 callback:(id /* block */)a1;
- (void)editorCreate:(id)a0 callback:(id /* block */)a1;
- (void)editorExport:(id)a0 callback:(id /* block */)a1;
- (void)editorRemove:(id)a0 callback:(id /* block */)a1;
- (void)editorGetTrack:(id)a0 callback:(id /* block */)a1;
- (void)editorCreateTrack:(id)a0 callback:(id /* block */)a1;
- (void)editorUpdateTrack:(id)a0 callback:(id /* block */)a1;
- (void)editorRemoveTrack:(id)a0 callback:(id /* block */)a1;
- (void)readerCreate:(id)a0 callback:(id /* block */)a1;
- (void)readerStart:(id)a0 callback:(id /* block */)a1;
- (void)readerWait:(id)a0 callback:(id /* block */)a1;
- (void)readerSeek:(id)a0 callback:(id /* block */)a1;
- (BOOL)readerGetVideo:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 ret:(id)a3;
- (BOOL)readerGetAudio:(unsigned int)a0 data:(char *)a1 size:(unsigned int)a2 ret:(id)a3;
- (BOOL)readerGetFrame:(unsigned int)a0 isVideo:(BOOL)a1 data:(char *)a2 size:(unsigned int)a3 frameInfo:(struct FrameInfo { int x0; int x1; BOOL x2; BOOL x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; double x11; double x12; double x13; double x14; double x15; } *)a4;
- (void)readerStop:(id)a0 callback:(id /* block */)a1;
- (void)readerRemove:(id)a0 callback:(id /* block */)a1;
- (void)loaderCreate:(id)a0 callback:(id /* block */)a1;
- (void)loaderStart:(id)a0 callback:(id /* block */)a1;
- (void)loaderStop:(id)a0 callback:(id /* block */)a1;
- (void)loaderRemove:(id)a0 callback:(id /* block */)a1;

@end
