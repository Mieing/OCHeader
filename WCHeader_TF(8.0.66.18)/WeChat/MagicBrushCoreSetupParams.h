@class NSString;

@interface MagicBrushCoreSetupParams : NSObject

@property (nonatomic) BOOL enablePerformance;
@property (nonatomic) BOOL isNativeRenderMode;
@property (nonatomic) BOOL autoHighFreshRate;
@property (nonatomic) BOOL disableDeleteBinding;
@property (nonatomic) BOOL enableGfx;
@property (nonatomic) BOOL enableMetalCPP;
@property (nonatomic) BOOL enableUnifiedCmdbuffer;
@property (nonatomic) BOOL enableCmdbufferCanvas2d;
@property (retain, nonatomic) NSString *renderThreadName;
@property (nonatomic) long long enableParallelShaderCompile;

- (void).cxx_destruct;

@end
