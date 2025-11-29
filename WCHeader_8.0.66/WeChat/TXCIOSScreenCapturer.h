@class NSString, NSMutableSet, TXCVideoFrame, TXCDispatchQueue;
@protocol TXIScreenCaptureDelegate;

@interface TXCIOSScreenCapturer : NSObject <TXReplayKitAppDelegate, TXIVideoCaptureInterface, TXIIOSScreenCapturerInterface> {
    struct EncodeParamsTypeHeader { unsigned short is_annexb; unsigned short rc_method; unsigned int width; unsigned int height; unsigned int framerate; unsigned int bitrate; unsigned int gop; unsigned int screen_encoding_aspect_ratio; } _currentEncodeParams;
}

@property (retain, nonatomic) TXCDispatchQueue *queue;
@property (retain, nonatomic) TXCDispatchQueue *outputQueue;
@property (retain, nonatomic) NSMutableSet *subscribers;
@property (retain, nonatomic) TXCVideoFrame *capturedVideoFrame;
@property (retain, nonatomic) NSString *appGroupId;
@property BOOL isRunning;
@property (nonatomic) BOOL needsKeyFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int captureType;
@property (weak, nonatomic) id<TXIScreenCaptureDelegate> delegate;

- (id)initWithQueue:(id)a0 outputQueue:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)applyConfigs:(id)a0;
- (void)setFrameRate:(long long)a0;
- (void)start;
- (void)stop;
- (void)onReceiveVideoPacket:(const void *)a0;
- (void)onBroadcastExtStarted;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (void)onConnected;
- (void)captureFrame:(id /* block */)a0;
- (void)setEncodeParams:(const void *)a0;
- (void)setVideoEncodeParams:(const struct VideoEncodeParams { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; int x8; int x9; float x10; float x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; unsigned int x17; unsigned int x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; int x24; int x25; int x26; int x27; int x28; unsigned int x29; } *)a0;
- (void)setBitrate:(long long)a0;
- (void)requestKeyFrame;
- (void)enableTranscodingMode:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
