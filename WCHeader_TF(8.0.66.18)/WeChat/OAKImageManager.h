@interface OAKImageManager : NSObject {
    struct XMutexPOSIX { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex; } _mutex;
    struct map<unsigned int, OAKImageRequestEntity *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, OAKImageRequestEntity *>>> { struct __tree<std::__value_type<unsigned int, OAKImageRequestEntity *>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, OAKImageRequestEntity *>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, OAKImageRequestEntity *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, OAKImageRequestEntity *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, OAKImageRequestEntity *>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _requestEntitiesByID;
}

+ (id)defaultManager;

- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestLivePhotoVideoWithAsset:(id)a0 toFile:(id)a1 livePhotoCompletionHandler:(id /* block */)a2;
- (void)onLivePhotoRequestDidCompleteWithTaskID:(unsigned int)a0 error:(id)a1;
- (void)onRequestDidCompleteWithImageData:(id)a0 dataUTI:(id)a1 orientation:(long long)a2 info:(id)a3 taskID:(unsigned int)a4;
- (void)onRequestDidCompleteWithAsset:(id)a0 audioMix:(id)a1 info:(id)a2 taskID:(unsigned int)a3;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
