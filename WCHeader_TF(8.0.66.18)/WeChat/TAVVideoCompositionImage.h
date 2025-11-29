@class CIImage;
@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionImage : NSObject

@property (retain, nonatomic) CIImage *image;
@property (retain, nonatomic) id<TAVVideoCompositionTrack> track;

- (void).cxx_destruct;

@end
