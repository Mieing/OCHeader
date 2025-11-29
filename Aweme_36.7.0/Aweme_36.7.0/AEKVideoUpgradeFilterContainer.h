@class NLETrack_OC, NSArray, NSString;

@interface AEKVideoUpgradeFilterContainer : NSObject <AEKUpgradeFilterContainerConvertible>

@property (retain, nonatomic) NLETrack_OC *track;
@property (retain, nonatomic) NSArray *filterTypes;
@property (readonly, nonatomic) unsigned long long targetType;
@property (readonly, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) BOOL hasTimeline;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) NSArray *filterSegments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrack:(id)a0 supportTypes:(id)a1;
- (BOOL)setLogFilterResource:(id)a0;
- (id)generateFilterSegmentWithType:(unsigned long long)a0 detailType:(long long)a1;
- (void)updateLogFilterIntensity:(double)a0;
- (void)removeFilterSegment:(id)a0;
- (void).cxx_destruct;

@end
