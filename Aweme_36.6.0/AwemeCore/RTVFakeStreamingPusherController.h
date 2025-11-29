@class NSString, CADisplayLink;
@protocol RTVXREngine;

@interface RTVFakeStreamingPusherController : NSObject <RTVXREngineDelegate, RTVFakeStreamingPusherController> {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
    struct __CVBuffer { } *_preFrame;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ captureBlock;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (weak, nonatomic) id<RTVXREngine> xrEngine;
@property (nonatomic) BOOL joinRoomSucceed;
@property (nonatomic) BOOL needStartPushFakeStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct __CVBuffer { } *)createDarkFrameWithFrameSize:(struct CGSize { double x0; double x1; })a0;

- (void)rxAwakeFromPropertyInjection;
- (void)xrEngine:(id)a0 didJoinRoom:(id)a1 withUid:(id)a2;
- (void)xrEngine:(id)a0 didLeaveRoom:(id)a1;
- (void)updateFrame:(struct __CVBuffer { } *)a0;
- (void)configWithXREngine:(id)a0 outputSize:(struct CGSize { double x0; double x1; })a1;
- (void)setPreFrame:(struct __CVBuffer { } *)a0;
- (void)__createFrame;
- (void)__pushFrame:(id)a0;
- (struct __CVBuffer { } *)preFrame;
- (BOOL)running;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)startStreaming;
- (void)stopStreaming;

@end
