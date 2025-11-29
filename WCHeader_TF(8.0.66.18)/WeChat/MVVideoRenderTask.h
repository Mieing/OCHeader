@class NSMutableArray;

@interface MVVideoRenderTask : NSObject

@property (retain, nonatomic) NSMutableArray *pixelBuffers;
@property (nonatomic) long long pts;

- (void).cxx_destruct;

@end
