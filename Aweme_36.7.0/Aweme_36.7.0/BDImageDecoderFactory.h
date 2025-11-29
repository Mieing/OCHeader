@interface BDImageDecoderFactory : NSObject

+ (Class)decoderForImageData:(id)a0 type:(unsigned long long *)a1;
+ (Class)decoderForImageData:(id)a0 type:(unsigned long long *)a1 decoderOptions:(unsigned long long)a2;
+ (Class)HEIFDecoderForData:(id)a0 isStaticSystemFirst:(BOOL)a1 isAnimatedCustomFirst:(BOOL)a2 decoderOptions:(unsigned long long)a3;
+ (BOOL)isHDRImageData:(id)a0 withHeifDecoderClass:(Class)a1;
+ (Class)AVIFDecoderForData:(id)a0;
+ (Class)HEIFDecoderForData:(id)a0 isStaticSystemFirst:(BOOL)a1 isAnimatedCustomFirst:(BOOL)a2;

@end
