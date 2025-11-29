@class NSMutableArray, VESegmentedComposerQueue;

@interface VESegmentedComposerManager : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *composerBuffers;
@property (retain, nonatomic) VESegmentedComposerQueue *composerActivated;

- (BOOL)addComposerParamAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 action:(id)a1;
- (id)getBufferAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)needOperationAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)getBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)hasComposer;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
