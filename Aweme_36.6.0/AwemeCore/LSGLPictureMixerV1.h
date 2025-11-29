@class NSMutableDictionary, LSGLFramebuffer;

@interface LSGLPictureMixerV1 : LSGLPictureMixer {
    NSMutableDictionary *inputFBs_;
    NSMutableDictionary *mixedFBs_;
    int available_layer_index_;
    int alphaUniform;
    LSGLFramebuffer *canvasFramebuffer;
    struct unique_ptr<LiveCoreN::LSMixerHelper, std::default_delete<LiveCoreN::LSMixerHelper>> { struct __compressed_pair<LiveCoreN::LSMixerHelper *, std::default_delete<LiveCoreN::LSMixerHelper>> { struct LSMixerHelper *__value_; } __ptr_; } mixer_;
    struct unique_ptr<avframework::VideoInfoStatisticManager, std::default_delete<avframework::VideoInfoStatisticManager>> { struct __compressed_pair<avframework::VideoInfoStatisticManager *, std::default_delete<avframework::VideoInfoStatisticManager>> { struct VideoInfoStatisticManager *__value_; } __ptr_; } statisticManager;
    unsigned long long mixer_index;
    NSMutableDictionary *_updateList;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mixer_mutex;
    unsigned int _masterLayer;
}

@property (nonatomic) struct CGSize { double width; double height; } superOutputSize;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)nextAvailableTextureIndex;
- (void)endProcessing;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (id)initWithOutputSize:(struct CGSize { double x0; double x1; })a0 Context:(id)a1;
- (void)setLayerInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })a0;
- (void)mixerRender;
- (id)getVideoInfoMessage;
- (void)updateLayerInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })a0 animated:(BOOL)a1 frames:(int)a2;
- (const struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)getLayerInfo:(unsigned int)a0;
- (void)clearLayer:(unsigned int)a0;
- (id)getAllLayerInfoDescription;
- (void)setMasterLayer:(unsigned int)a0;
- (unsigned int)masterLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })singleViewShowRegion;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })outputSize;
- (id)initWithContext:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void)checkForUpdate:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)a0;
- (void)dealloc;
- (void)setOutputSize:(struct CGSize { double x0; double x1; })a0;

@end
