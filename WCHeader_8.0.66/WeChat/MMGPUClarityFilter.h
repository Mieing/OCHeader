@interface MMGPUClarityFilter : MMGPUOneTextureRender {
    int uniform_location_clarity_flag;
    int uniform_location_pixel_mapping;
    int uniform_location_saturation_decay;
    int uniform_location_face_decay_zero;
    int uniform_location_face_decay_one;
}

- (id)initWithMode:(int)a0;
- (void)setClarityFlag:(int)a0;
- (void)setPixelMapping:(float *)a0;
- (void)setSaturationDecay:(float)a0;
- (void)setFaceDecayZero:(float)a0 One:(float)a1;
- (unsigned int)process:(int)a0 inputRes:(struct CGSize { double x0; double x1; })a1;

@end
