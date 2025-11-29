@class MMAssetInfo, OMJClipSegment;

@interface WCFinderVideoProducerAssetCellViewModel : NSObject

@property (retain, nonatomic) MMAssetInfo *assetInfo;
@property (retain, nonatomic) OMJClipSegment *clipSegment;
@property (nonatomic) BOOL isSegmentModified;
@property (nonatomic) unsigned long long editCount;
@property (nonatomic) unsigned long long modifyCount;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } modifiedAssetTimeRangeInSegment;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) long long cellOrder;
@property (nonatomic) BOOL isSelected;

+ (id)sectionId;

- (id)initWithAssetInfo:(id)a0 clipSegment:(id)a1;
- (void)onEditingSegmentStartTimeSec:(double)a0;
- (void)modifySegmentStartTimeSec:(double)a0;
- (void)resetDefaultSegmentTimeRange;
- (void)applyModifiedSegment;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getSegmentCurrentTimeRange;
- (id)generateClipAssetInfoMap;
- (id)generateClipAssetInfoMapWithTimeScale:(unsigned int)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_getFixedTimeRangeWithPreferedStartTime:(double)a0;
- (void).cxx_destruct;

@end
