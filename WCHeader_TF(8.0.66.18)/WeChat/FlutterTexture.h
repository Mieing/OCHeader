@class IOSurface;
@protocol MTLTexture;

@interface FlutterTexture : NSObject

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) IOSurface *surface;
@property (nonatomic) double presentedTime;
@property BOOL waitingForCompletion;

- (id)initWithTexture:(id)a0 surface:(id)a1;
- (void).cxx_destruct;

@end
