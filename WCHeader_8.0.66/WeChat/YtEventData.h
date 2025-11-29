@class CIImage;

@interface YtEventData : NSObject

@property (nonatomic) struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } data;
@property (retain, nonatomic) CIImage *depthFrame;
@property (nonatomic) unsigned long long timestamp;

- (id)initWith:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0 withTimestamp:(unsigned long long)a1;
- (id)initWith:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; } *)a0 withDepth:(id)a1 withTimestamp:(unsigned long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
