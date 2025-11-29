@class NSString;

@interface OMJTextureHolderImpl : NSObject <OMJTextureHolder>

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;
- (struct __CVBuffer { } *)copyPixelBuffer;

@end
