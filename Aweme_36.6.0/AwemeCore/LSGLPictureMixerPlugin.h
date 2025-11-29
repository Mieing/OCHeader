@class NSMutableDictionary;

@interface LSGLPictureMixerPlugin : LSGLPictureMixer {
    struct CoreElement_ { struct CoreObject_ { struct CoreTypeInstance_ { struct CoreTypeClass_ *x0; } x0; struct CoreRef_ { int x0; void /* function */ *x1; } x1; char *x2; struct CoreObject_ *x3; unsigned int x4; struct CoreMutex_ { struct CoreMutexData_ { void *x0; } x0; } x5; void *x6; } x0; struct CoreBus_ *x1; int x2; int x3; int x4; int x5; struct CoreClock_ *x6; unsigned int x7; struct CoreList_ *x8; unsigned int x9; struct CoreList_ *x10; unsigned int x11; struct CoreList_ *x12; unsigned int x13; struct CoreObject_ *x14; } *gl_mixer_;
    struct CoreElement_ { struct CoreObject_ { struct CoreTypeInstance_ { struct CoreTypeClass_ *x0; } x0; struct CoreRef_ { int x0; void /* function */ *x1; } x1; char *x2; struct CoreObject_ *x3; unsigned int x4; struct CoreMutex_ { struct CoreMutexData_ { void *x0; } x0; } x5; void *x6; } x0; struct CoreBus_ *x1; int x2; int x3; int x4; int x5; struct CoreClock_ *x6; unsigned int x7; struct CoreList_ *x8; unsigned int x9; struct CoreList_ *x10; unsigned int x11; struct CoreList_ *x12; unsigned int x13; struct CoreObject_ *x14; } *mixed_frame_sink_;
    struct CorePipeline_ { struct CoreBin_ { struct CoreElement_ { struct CoreObject_ { struct CoreTypeInstance_ { struct CoreTypeClass_ *x0; } x0; struct CoreRef_ { int x0; void /* function */ *x1; } x1; char *x2; struct CoreObject_ *x3; unsigned int x4; struct CoreMutex_ { struct CoreMutexData_ { void *x0; } x0; } x5; void *x6; } x0; struct CoreBus_ *x1; int x2; int x3; int x4; int x5; struct CoreClock_ *x6; unsigned int x7; struct CoreList_ *x8; unsigned int x9; struct CoreList_ *x10; unsigned int x11; struct CoreList_ *x12; unsigned int x13; struct CoreObject_ *x14; } x0; struct CoreBus_ *x1; struct CoreList_ *x2; int x3; unsigned int x4; struct CoreList_ *x5; unsigned int x6; struct CoreBinPrivate_ *x7; void *x8[4]; } x0; unsigned long long x1; struct CorePipelinePrivate_ *x2; } *pipeline_;
    struct CoreEvent_ { struct _CoreMiniObject { struct CoreRef_ { int x0; void /* function */ *x1; } x0; unsigned long long x1; int x2; unsigned int x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; unsigned int x7; void *x8; } x0; int x1; unsigned long long x2; unsigned int x3; } *pad_layout_event_;
    struct _CoreStructure { unsigned long long x0; unsigned int x1; } *pad_layout_structure_;
    NSMutableDictionary *inputLayers_;
    int master_layer_index_;
}

- (long long)nextAvailableTextureIndex;
- (void)endProcessing;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (struct _CoreBuffer { struct _CoreMiniObject { struct CoreRef_ { int x0; void /* function */ *x1; } x0; unsigned long long x1; int x2; unsigned int x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; unsigned int x7; void *x8; } x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; union { long long x0; double x1; void *x2; } x8[4]; } *)LSGLFrameBufferToCoreBuffer:(id)a0;
- (id)initWithOutputSize:(struct CGSize { double x0; double x1; })a0 Context:(id)a1;
- (void)setLayerInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })a0;
- (id)getVideoInfoMessage;
- (void)updateLayerInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })a0 animated:(BOOL)a1 frames:(int)a2;
- (const struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)getLayerInfo:(unsigned int)a0;
- (void)clearLayer:(unsigned int)a0;
- (id)getAllLayerInfoDescription;
- (void)setMasterLayer:(unsigned int)a0;
- (unsigned int)masterLayer;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })outputSize;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)addTarget:(id)a0;

@end
