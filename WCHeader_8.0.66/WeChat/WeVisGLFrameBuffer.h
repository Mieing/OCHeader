@interface WeVisGLFrameBuffer : NSObject

@property (nonatomic) unsigned int fboId;

- (id)initWithColorTexture2D0:(unsigned int)a0;
- (void)bind;
- (void)dealloc;

@end
