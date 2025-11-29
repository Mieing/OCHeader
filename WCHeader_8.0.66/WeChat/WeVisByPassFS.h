@class WeVisGLDrawQuad;

@interface WeVisByPassFS : NSObject {
    WeVisGLDrawQuad *mQuadDrawerY;
}

@property (nonatomic) BOOL isInitialized;

- (id)init;
- (void)drawQuad:(unsigned int)a0;
- (void).cxx_destruct;

@end
