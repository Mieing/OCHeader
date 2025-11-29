@class MAVCompositionTrack;

@interface MAVCompositionMixEffectTrackRenderInfo : NSObject

@property (retain, nonatomic) MAVCompositionTrack *track;
@property (nonatomic) struct __CVBuffer { } *textureRef;
@property (nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithRenderInfo:(id)a0 texture:(struct __CVBuffer { } *)a1 size:(struct CGSize { double x0; double x1; })a2;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
