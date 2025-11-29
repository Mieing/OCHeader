@class NSMutableArray;

@interface VESegmentedComposerQueue : NSObject <NSCopying>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSMutableArray *composerActions;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
