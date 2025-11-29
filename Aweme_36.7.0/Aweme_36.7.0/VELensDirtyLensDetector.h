@class VELensDirtyLensDetectorConfig;

@interface VELensDirtyLensDetector : NSObject

@property (retain) VELensDirtyLensDetectorConfig *config;
@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (copy, nonatomic) id /* block */ resultBlock;

- (BOOL)setupWithConfig:(id)a0;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)a0 newLifeCycle:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
