@class NSString, DynamicBackgroundSystemConfig, NSMutableArray;
@protocol DynamicBackgroundSystemDelegate;

@interface WADynamicBackgroundSystem : WADynamicBackgroundGLObject <WCMainWindowExt> {
    unsigned int colorStep;
    float colorRatio;
}

@property (nonatomic) BOOL currentInDarkMode;
@property (retain, nonatomic) DynamicBackgroundSystemConfig *config;
@property (retain, nonatomic) NSMutableArray *activeParticles;
@property (nonatomic) unsigned int framePerSecond;
@property (nonatomic) double backgroundDuration;
@property (weak, nonatomic) id<DynamicBackgroundSystemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getDefaultDynamicSystemConfigForWidth:(double)a0 height:(double)a1;
+ (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })getVector4ColorFromHex:(int)a0 alpha:(double)a1;

- (id)initWithGLContext:(id)a0 config:(id)a1;
- (void)detectDarkMode;
- (void)fillParticles;
- (void)newParticle;
- (void)resetParticle:(id)a0;
- (void)update:(double)a0;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })getColorFromStartConfig:(id)a0 endConfig:(id)a1 index:(unsigned int)a2 portion:(double)a3;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })getBGColorFromStartConfig:(id)a0 endConfig:(id)a1 bgIndex:(unsigned int)a2 portion:(double)a3;
- (union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })mixColorWithA:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a0 b:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1 portion:(double)a2;
- (void)draw:(id)a0;
- (float)randFloat:(float)a0 end:(float)a1;
- (union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })randVector3:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a0 end:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1;
- (double)getNumberInNormalDistributionWithMean:(double)a0 stdDev:(double)a1;
- (double)uniform2NormalDistribution;
- (void)mm_onColorAppearanceDidChange;
- (void).cxx_destruct;

@end
