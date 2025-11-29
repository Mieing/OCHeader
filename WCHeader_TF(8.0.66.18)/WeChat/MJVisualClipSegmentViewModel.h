@class NSString, OMCClipSegment;
@protocol OMCPictureEnhancable, OMCContentSpatialAdjustable, OMCColorAdjustable, OMCClipSpeedAdjustable, OMCFilterAdjustable, OMCSpeedAdjustable, OMCThumbnailProvider, OMCVolumeAdjustable;

@interface MJVisualClipSegmentViewModel : MJElementSegmentViewModel {
    struct { BOOL isExecuting; struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } taskIDs; } _prefetchingParams;
}

@property (retain, nonatomic) OMCClipSegment *clipSegment;
@property (retain, nonatomic) id<OMCThumbnailProvider> thumbnailProvider;
@property (retain, nonatomic) id<OMCColorAdjustable> colorAdjustable;
@property (retain, nonatomic) id<OMCPictureEnhancable> pictureEnhancable;
@property (retain, nonatomic) id<OMCFilterAdjustable> filterAdjustable;
@property (retain, nonatomic) id<OMCContentSpatialAdjustable> contentSpatialAdjustable;
@property (retain, nonatomic) id<OMCVolumeAdjustable> volumeAdjustable;
@property (retain, nonatomic) id<OMCClipSpeedAdjustable> speedAdjustable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } thumbnailPixelSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } thumbnailPointSize;
@property (readonly, nonatomic) NSString *mediaFilePath;
@property (readonly, nonatomic) NSString *phLocalIdentifier;
@property (readonly, nonatomic) BOOL isFilterAdjusted;
@property (readonly, nonatomic) BOOL isAudioMuted;
@property (readonly, nonatomic) BOOL isContentSpatialAdjusted;
@property (readonly, nonatomic) BOOL isColorAdjusted;
@property (readonly, nonatomic) BOOL isPictureParamAdjusted;
@property (readonly, nonatomic) BOOL isReversed;
@property (readonly, nonatomic) BOOL isSpeedCurveAdjusted;
@property (readonly, nonatomic) id<OMCSpeedAdjustable> speedAdjustableProxy;
@property (readonly, nonatomic) double storylineHeight;

- (id)initWithClipSegment:(id)a0 storylineHeight:(double)a1;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithVisualClipSegmentImpl;
- (void)dealloc;
- (long long)requestThumbnailAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 resultHandler:(id /* block */)a1;
- (void)cancelRequestTask:(long long)a0;
- (void)cancelAllRequestTasks;
- (void)reopenThumbnailProviderIfNeeded;
- (void)prefetch;
- (void)cancelPrefetching;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })clipTimeToMedia:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mediaTimeToClip:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)syncWithMutationEntry:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
