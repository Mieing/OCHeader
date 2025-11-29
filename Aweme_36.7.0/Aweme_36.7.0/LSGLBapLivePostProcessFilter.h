@class NSString;

@interface LSGLBapLivePostProcessFilter : LSGLPictureInput <LSGLInput>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)updateTargetsForFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 needRender:(BOOL)a1;
- (id)name;
- (id)init;
- (BOOL)enabled;
- (void)startProcessing;

@end
