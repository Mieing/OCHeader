@interface MMGPUBilateralSapatialCombineDenosing : MMGPUThreeTextureRender {
    int spatialBilateralFilterControlUniform;
    int spatialBilateralFilterSwitchUniform;
}

- (id)init;
- (void)setBilateralSapatialFilterControl:(int)a0;
- (void)setBilateralSapatialFilterSwitch:(int)a0;

@end
