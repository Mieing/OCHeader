@class NSObject;
@protocol OS_dispatch_queue;

@interface MetalFilterLens : FilterBase {
    struct ILensEngineInterface { void /* function */ **x0; } *_lenEngine;
    struct VideoProcessorFilter { void /* function */ **x0; struct ILensEngineInterface *x1; } *currentFilter;
    struct VideoProcessorSRFilter { void /* function */ **x0; struct ILensEngineInterface *x1; int x2; int x3; id x4; BOOL x5; BOOL x6; int x7; int x8; id x9; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x10; BOOL x11; struct ILensEngineInterface *x12; struct ILensFlowGraphInterface *x13; } *srFilter;
    struct VideoProcessorASFFilter { void /* function */ **x0; struct ILensEngineInterface *x1; int x2; int x3; id x4; BOOL x5; BOOL x6; int x7; int x8; id x9; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x10; BOOL x11; struct ILensEngineInterface *x12; struct ILensFlowGraphInterface *x13; } *asfFilter;
    NSObject<OS_dispatch_queue> *_metalprocessorQueue;
    BOOL isLivingStream;
    BOOL isMultiMode;
    int currentMode;
    BOOL enable15SR;
}

- (id)getEffectPatameterStr;
- (id)initWithLivingStream:(BOOL)a0 isMultiMode:(BOOL)a1 currentMode:(int)a2 enable15SR:(BOOL)a3 licenseName:(id)a4;
- (void)initModelWithMTLDevice:(id)a0 MTLLibrary:(id)a1 MTLCommandQueue:(id)a2 width:(int)a3 height:(int)a4 license:(id)a5;
- (void)configFilter:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (id)initWithLivingStream:(BOOL)a0 isMultiMode:(BOOL)a1 currentMode:(int)a2 enable15SR:(BOOL)a3;
- (int)getValueForKey:(int)a0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (void)setEffect:(id)a0;
- (void)dealloc;

@end
