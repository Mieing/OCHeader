@interface MAVBlendEffect : MAVVLogEffect <MAVTextureInfoEffect>

- (long long)type;
- (void)setIsPreMultiplied:(BOOL)a0;
- (void)setTextureInfo:(int)a0 width:(int)a1 height:(int)a2;
- (void)setTextureInfoWithPixelBuf:(struct __CVBuffer { } *)a0;
- (void)dealloc;

@end
