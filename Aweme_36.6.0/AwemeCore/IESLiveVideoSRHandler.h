@class NSError, NSString;

@interface IESLiveVideoSRHandler : NSObject <IESLiveVideoSRHandlerAction> {
    struct __CVMetalTextureCache { } *video_texture_cache_;
    struct ILensEngineInterface { void /* function */ **x0; } *_lenEngine;
    struct ILensFlowGraphInterface { void /* function */ **x0; } *_flowGraph;
    int _srType;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL srSetStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSR;
- (BOOL)setupTextureWithEncoder:(id)a0 buffer:(struct __CVBuffer { } *)a1 view:(id)a2 tex_y:(id *)a3 tex_uv:(id *)a4 outPixelBufWidth:(unsigned long long *)a5 outPixelBufHeight:(unsigned long long *)a6 error:(id *)a7;
- (BOOL)init_model:(id)a0 height:(int)a1 width:(int)a2 modelData:(id)a3 isMemPool:(BOOL)a4 outputMode:(int)a5 srType:(int)a6 ratioSR:(int)a7 error:(id *)a8;
- (int)srSetInputProperty:(id)a0 width:(int)a1 height:(int)a2;
- (BOOL)process:(struct __CVBuffer { } *)a0 outTexGray:(id *)a1 outTexUv:(id *)a2 device:(id)a3 outPixelBufWidth:(unsigned long long *)a4 outPixelBufHeight:(unsigned long long *)a5 error:(id *)a6;
- (BOOL)getTexFromPixelBuffer:(id)a0 outPixelBuffer:(struct __CVBuffer { } *)a1 uv_tex:(id *)a2 y_tex:(id *)a3 outPixelBufWidth:(unsigned long long *)a4 outPixelBufHeight:(unsigned long long *)a5 error:(id *)a6;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
