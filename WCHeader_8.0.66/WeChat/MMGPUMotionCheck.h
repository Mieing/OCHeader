@interface MMGPUMotionCheck : MMGPUTwoTextureRender {
    int motionCheckControlUniform;
    int motionCheckSwitchUniform;
    float noiseLevelUniform;
    int texelWidthLocation;
    int texelHeightLocation;
}

- (id)init;
- (void)setMotionCheckControl:(int)a0;
- (void)setNoiseLevel:(float)a0;
- (void)setTextureRes:(int)a0 Height:(int)a1;

@end
