@class NSObject, NSString, OMCClipSegment, OMJID;
@protocol OS_dispatch_queue;

@interface OMCVideoThumbnailProvider : NSObject <OMCThumbnailProvider> {
    BOOL _useOriginMediaClip;
    OMCClipSegment *_clipSegment;
    struct SharedPtr<XMFVideoClipThumbGen> { struct XMFVideoClipThumbGen *_ptr; } _backingThumbGen;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { struct __tree<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<unsigned int, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<unsigned int>> { unsigned long long __value_; } __pair3_; } __tree_; } _taskIDs;
    struct XIntegerID<int, -1> { int _value; } _clientID;
    struct XID { struct XUUID { struct uuid { unsigned char data[16]; } _backingUUID; } _backingUUID; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _string; } _clipID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct XMutexPOSIX { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex; } _mutex;
}

@property (nonatomic) struct CGSize { double width; double height; } maxPixelSize;
@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClipSegment:(id)a0 maxPixelSize:(struct CGSize { double x0; double x1; })a1 useOriginMediaClip:(BOOL)a2 callbackQueue:(id)a3;
- (void)dealloc;
- (void)teardownIfNeeded;
- (long long)requestThumbnailAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 resultHandler:(id /* block */)a1;
- (long long)requestThumbnailAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 resultHandler:(id /* block */)a1;
- (void)onRequestCompleteForTimeRange:(struct XTMTimeRange { struct XTMTime { long long x0; unsigned int x1; } x0; struct XTMTime { long long x0; unsigned int x1; } x1; })a0 resultHandler:(id /* block */)a1 resultType:(int)a2 videoFrame:(struct SharedPtr<XMFVideoFrame> { struct XMFVideoFrame *x0; })a3 taskID:(unsigned int)a4;
- (void)cancelTask:(long long)a0;
- (void)cancelAllTasks;
- (void)reopen;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
