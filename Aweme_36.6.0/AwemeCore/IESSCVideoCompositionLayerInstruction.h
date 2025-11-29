@protocol IESSCVideo, ISSCVideoTimeline, IESSCVideoTransition;

@interface IESSCVideoCompositionLayerInstruction : NSObject

@property (nonatomic) int trackID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } prefferdTransform;
@property (retain, nonatomic) id<IESSCVideo> imageSourceProvider;
@property (retain, nonatomic) id<ISSCVideoTimeline> videoComposition;
@property (retain, nonatomic) id<IESSCVideoTransition> transition;

- (id)initWithTrackID:(int)a0 videoComposition:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
