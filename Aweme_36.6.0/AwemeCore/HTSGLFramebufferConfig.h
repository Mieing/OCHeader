@class HTSGLContext;

@interface HTSGLFramebufferConfig : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } framebufferSize;
@property (nonatomic) BOOL onlyTexture;
@property (nonatomic) BOOL disableCache;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) unsigned long long color;
@property (nonatomic) BOOL useRectangle;

- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
