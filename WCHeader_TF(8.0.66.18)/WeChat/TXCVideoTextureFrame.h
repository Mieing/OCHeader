@class TXCMetalContext, TXCGlFrameBuffer;
@protocol MTLTexture;

@interface TXCVideoTextureFrame : NSObject

@property (readonly, weak, nonatomic) TXCGlFrameBuffer *frameBuffer;
@property (nonatomic) unsigned int texture;
@property (readonly, nonatomic) id<MTLTexture> metalTextue;
@property (readonly, nonatomic) TXCMetalContext *metalContext;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;

- (id)initWithFrameBuffer:(id)a0;
- (id)initWithTexture:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void).cxx_destruct;

@end
