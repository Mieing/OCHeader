@class NSString, BmfSuperResolution;

@interface IESLiveVideoBMFSRHandler : NSObject <IESLiveVideoSRHandlerAction>

@property (retain, nonatomic) BmfSuperResolution *processor;
@property (nonatomic) int scaleMode;
@property (retain, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSRScaleMode:(long long)a0;
- (BOOL)setupTextureWithEncoder:(id)a0 buffer:(struct __CVBuffer { } *)a1 view:(id)a2 tex_y:(id *)a3 tex_uv:(id *)a4 outPixelBufWidth:(unsigned long long *)a5 outPixelBufHeight:(unsigned long long *)a6 error:(id *)a7;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
