@class VELensConfig;

@interface VELensSharpFilter : NSObject

@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (retain, nonatomic) VELensConfig *config;

- (BOOL)updateSharpenParam:(struct { int x0; int x1; int x2; float x3; float x4; float x5; int x6; void *x7; })a0;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
