@class NSString, OMJAssetInfo;

@interface OMJClipSegment : OMJSegment <OMJCropAdjustable, OMJRotationAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMFClip> { struct XMFClip *x0; } backingClip;
@property (readonly, nonatomic) struct SharedPtr<XAKAsset> { struct XAKAsset *x0; } backingAsset;
@property (nonatomic) struct SharedPtr<XMJClipSegment> { struct XMJClipSegment *_ptr; } backingClipSegment;
@property (readonly, nonatomic) unsigned long long clipType;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } clipDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRangeInClip;
@property (readonly, nonatomic) OMJAssetInfo *assetInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCropRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long rotationMode;

- (id)initWithBackingSegment:(const void *)a0;
- (BOOL)setTimeRangeInClip:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldCommit:(BOOL)a1;
- (void)setRotationMode:(unsigned long long)a0 shouldCommit:(BOOL)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
