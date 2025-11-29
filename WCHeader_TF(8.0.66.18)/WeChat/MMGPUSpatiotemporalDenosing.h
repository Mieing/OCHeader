@class MMGPUMultiTemporalFilterRender, MMGPUTemporalCacheRender, MMGPURGB2YUVRender, MMGPUOneTextureRender, MMGPUBilateralSapatialCombineDenosing, MMGPUMotionCheck, MMGPUStrongBilateralFilter, MMGPUSpatialRecursiveDenosing;

@interface MMGPUSpatiotemporalDenosing : NSObject {
    MMGPUBilateralSapatialCombineDenosing *bilateralSapatialCombineDenosing;
    MMGPUSpatialRecursiveDenosing *spatialRecursiveDenosing;
    MMGPUMotionCheck *motionCheck;
    MMGPUOneTextureRender *frameBufferFilter;
    MMGPUStrongBilateralFilter *strongBilateralFilter;
    MMGPURGB2YUVRender *rgb2yuvFilter;
    MMGPUMultiTemporalFilterRender *multiTemporalFilter;
    MMGPUTemporalCacheRender *temporalCacheRender;
    BOOL useSpatioFilter;
    BOOL mUseMultiTemporalFilter;
}

- (id)init:(BOOL)a0 useMultiTemporalFilter:(BOOL)a1;
- (id)init:(BOOL)a0;
- (void)setMotionCheckControl:(int)a0;
- (void)setSpatialRecursiveFilterControl:(int)a0;
- (void)setBilateralSapatialFilterControl:(int)a0;
- (void)setTemporalDenosingLevel:(int)a0;
- (int)updateMMGPUFramebuffer:(struct CGSize { double x0; double x1; })a0;
- (void)destroyFrameBuffer;
- (void)setNoiseLevel:(float)a0;
- (void)setTemporalDenosingSwitch:(int)a0;
- (int)processing:(int)a0 inputRes:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
