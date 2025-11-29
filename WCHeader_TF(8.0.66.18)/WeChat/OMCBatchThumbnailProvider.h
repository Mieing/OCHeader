@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface OMCBatchThumbnailProvider : NSObject {
    BOOL _useOriginMediaClip;
    NSArray *_clipSegments;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned int>> { unsigned long long __value_; } __pair3_; } __tree_; } _videoClipTaskIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct XMutexPOSIX { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex; } _mutex;
    struct SharedPtr<XMFVideoClipThumbGenKeyframeImpl> { struct XMFVideoClipThumbGenKeyframeImpl *_ptr; } _backingVideoClipThumbGen;
    struct map<XID, XIntegerID<int, -1>, std::less<XID>, std::allocator<std::pair<const XID, XIntegerID<int, -1>>>> { struct __tree<std::__value_type<XID, XIntegerID<int, -1>>, std::__map_value_compare<XID, std::__value_type<XID, XIntegerID<int, -1>>, std::less<XID>>, std::allocator<std::__value_type<XID, XIntegerID<int, -1>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<XID, XIntegerID<int, -1>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<XID, std::__value_type<XID, XIntegerID<int, -1>>, std::less<XID>>> { unsigned long long __value_; } __pair3_; } __tree_; } _clientIDsByVideoClipSegmentID;
}

@property (nonatomic) struct CGSize { double width; double height; } maxPixelSize;

+ (id)providerWithSegments:(id)a0 maxPixelSize:(struct CGSize { double x0; double x1; })a1;
+ (id)providerWithSegments:(id)a0 maxPixelSize:(struct CGSize { double x0; double x1; })a1 useOriginMediaClip:(BOOL)a2;

- (id)initWithClipSegments:(id)a0 maxPixelSize:(struct CGSize { double x0; double x1; })a1 useOriginMediaClip:(BOOL)a2 callbackQueue:(id)a3;
- (void)dealloc;
- (void)teardownIfNeeded;
- (void)reopen;
- (long long)requestThumbnailAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 segmentID:(id)a1 resultHandler:(id /* block */)a2;
- (long long)requestThumbnailAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 segmentID:(id)a1 resultHandler:(id /* block */)a2;
- (void)onRequestCompleteForTimeRange:(struct XTMTimeRange { struct XTMTime { long long x0; unsigned int x1; } x0; struct XTMTime { long long x0; unsigned int x1; } x1; })a0 segmentID:(id)a1 resultHandler:(id /* block */)a2 resultType:(int)a3 videoFrame:(struct SharedPtr<XMFVideoFrame> { struct XMFVideoFrame *x0; })a4 taskID:(unsigned int)a5;
- (void)cancelTask:(long long)a0;
- (void)cancelAllTasks;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
