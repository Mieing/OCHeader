@interface AWEIMSwiftImpl.ImagePerformanceDecoder : HTSService <AWEIMImagePerformanceDecoderProtocol>

+ (id)imageResolutionFromData:(id)a0;
+ (id)reduceImageResolutionFromData:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)reduceImageResolutionWithRate:(float)a0 fromData:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2 info:(id)a3;
+ (id)sceneKey;

- (id)init;

@end
