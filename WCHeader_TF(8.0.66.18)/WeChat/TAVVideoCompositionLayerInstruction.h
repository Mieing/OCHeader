@class NSString;
@protocol TAVVideoCompositionTrack, TAVVideoComposition, TAVVideoTransition;

@interface TAVVideoCompositionLayerInstruction : NSObject <TAVVideoComposition>

@property (nonatomic) int trackID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } prefferdTransform;
@property (retain, nonatomic) id<TAVVideoCompositionTrack> imageSourceProvider;
@property (retain, nonatomic) id<TAVVideoComposition> videoComposition;
@property (retain, nonatomic) id<TAVVideoTransition> transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
