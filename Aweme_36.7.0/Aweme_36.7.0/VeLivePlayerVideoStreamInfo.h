@interface VeLivePlayerVideoStreamInfo : NSObject

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) float fps;

- (id)initWithStreamWidth:(int)a0 height:(int)a1 fps:(int)a2;

@end
