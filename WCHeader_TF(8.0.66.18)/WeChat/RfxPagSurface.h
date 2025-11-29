@class RfxPagSurfaceImpl;

@interface RfxPagSurface : NSObject

@property (retain, nonatomic) RfxPagSurfaceImpl *surface;

+ (id)FromView:(id)a0;

- (id)impl;
- (void)dealloc;
- (int)width;
- (int)height;
- (void)updateSize;

@end
