@class NSString;

@interface AWEPixelBufferTransformer : NSObject <AWEPixelBufferTransformerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageFromCVPixelBufferRefForTTPlayer:(struct __CVBuffer { } *)a0;
+ (void)convertBGRAtoRGBA:(char *)a0 withSize:(unsigned long long)a1;


@end
