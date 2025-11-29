@class OMJContentSpatialDesc;

@interface OMJImageClip : OMJClip

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) OMJContentSpatialDesc *contentSpatialDesc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentCropRect;

- (id)initWithAssetInfo:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;

@end
