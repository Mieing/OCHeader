@interface VECrossPlatRecorderSequenceTransformer : NSObject {
    struct unordered_map<void *, std::shared_ptr<TEClip>, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, std::shared_ptr<TEClip>>>> { struct __hash_table<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, std::shared_ptr<TEClip>>, std::hash<void *>, std::equal_to<void *>>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, std::shared_ptr<TEClip>>, std::equal_to<void *>, std::hash<void *>>, std::allocator<std::__hash_value_type<void *, std::shared_ptr<TEClip>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, std::shared_ptr<TEClip>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, std::shared_ptr<TEClip>>, std::hash<void *>, std::equal_to<void *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, std::shared_ptr<TEClip>>, std::equal_to<void *>, std::hash<void *>>> { float __value_; } __p3_; } __table_; } _assetClipMap;
}

+ (long long)getRecordNum;
+ (struct shared_ptr<rec::TERecordModel> { struct TERecordModel *x0; struct __shared_weak_count *x1; })recorderVideoData2TERecordModel:(id)a0;
+ (void)addAudioFilterForMic:(double)a0 withVideoData:(id)a1;
+ (void)removeTrack:(id)a0 withVideoData:(id)a1;
+ (id)addDuetVideoTrack:(id)a0 videoData:(id)a1;
+ (void)removeStreamFilterForVideoTrack:(id)a0 withVideoData:(id)a1 isGreen:(BOOL)a2;
+ (void)addStreamFilterForVideoTrack:(id)a0 isBGVideo:(BOOL)a1 bgAuxiliaryKey:(id)a2 withVideoData:(id)a3;
+ (void)addDummyFilterOnCameraClipWithVideoData:(id)a0 isGreen:(BOOL)a1;
+ (id)addDuetVideoAssetTrack:(id)a0 videoData:(id)a1;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })getDuetClipIdOnTrackWithTrackId:(const void *)a0 recordModel:(struct shared_ptr<rec::TERecordModel> { struct TERecordModel *x0; struct __shared_weak_count *x1; })a1;
+ (id)addDuetAudioAssetTrack:(id)a0 videoData:(id)a1;
+ (void)addVolumeFilterForAudioTrack:(id)a0 withVideoData:(id)a1;
+ (void)removeDummyFilterOnCamerClipWithVideoData:(id)a0 isGreen:(BOOL)a1;
+ (void)setVolume:(float)a0 forAudioTrack:(id)a1 withVideoData:(id)a2;
+ (void)replaceAudioData:(id)a0;
+ (void)udpateRecordNum;
+ (struct shared_ptr<ITEModelEffect> { struct ITEModelEffect *x0; struct __shared_weak_count *x1; })p_addStreamFitlerForVideoTrack:(const void *)a0 withRecordModel:(struct shared_ptr<rec::TERecordModel> { struct TERecordModel *x0; struct __shared_weak_count *x1; })a1 isGreen:(BOOL)a2;
+ (long long)getClipIdIndex;
+ (void)addFeature:(id)a0 forAsset:(id)a1 withVideoData:(id)a2;
+ (void)deleteFeature:(id)a0 forAsset:(id)a1 withVideoData:(id)a2;
+ (void)updateFeature:(id)a0 forAsset:(id)a1 withVideoData:(id)a2;
+ (struct shared_ptr<ITEModelClip> { struct ITEModelClip *x0; struct __shared_weak_count *x1; })getClipForAudioTrack:(id)a0 withVideoData:(id)a1;
+ (BOOL)applyLogLUTwithVideoData:(id)a0 param:(id)a1;

- (BOOL)p_addTrackWithAsset:(id)a0 trackIndex:(int)a1 trackId:(id)a2 isAudio:(BOOL)a3 videoData:(id)a4;
- (void)p_updateTimeLineWithRecordModel:(struct shared_ptr<rec::TERecordModel> { struct TERecordModel *x0; struct __shared_weak_count *x1; })a0;
- (void)p_updateClipsRecord:(struct shared_ptr<rec::TERecordModel> { struct TERecordModel *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)p_addTrackWithClipInfo:(id)a0 trackIndex:(int)a1 trackId:(id)a2 isAudio:(BOOL)a3 videoData:(id)a4;
- (BOOL)p_addAmazingFeature:(id)a0 asset:(id)a1 videoData:(id)a2;
- (BOOL)p_deleteAmazingFeature:(id)a0 asset:(id)a1 videoData:(id)a2;
- (BOOL)p_updateAmazingFeature:(id)a0 asset:(id)a1 videoData:(id)a2;
- (struct shared_ptr<TEClip> { struct TEClip *x0; struct __shared_weak_count *x1; })p_createClipWithAVAsset:(id)a0 videoData:(id)a1 type:(int)a2 errorNum:(id *)a3;
- (BOOL)p_addAssetClipToTrack:(void *)a0 videoData:(id)a1 subTrackAsset:(id)a2 isAudio:(BOOL)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
