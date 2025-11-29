@interface CameraScanGoodsImageProcessResult : NSObject

@property (nonatomic) struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } oriImage;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
