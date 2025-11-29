@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionPixelBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) id<TAVVideoCompositionTrack> track;

- (void).cxx_destruct;

@end
