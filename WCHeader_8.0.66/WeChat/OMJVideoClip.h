@class OMJContentSpatialDesc;

@interface OMJVideoClip : OMJClip

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRangeInAsset;
@property (retain, nonatomic) OMJContentSpatialDesc *contentSpatialDesc;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentCropRect;

- (id)initWithAssetInfo:(id)a0;
- (id)initWithAssetInfo:(id)a0 timeRangeInAsset:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void).cxx_destruct;

@end
