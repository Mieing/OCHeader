@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _TTVideoEngineAlog : NSObject {
    NSObject<OS_dispatch_semaphore> *_seesionSem;
    struct unordered_map<unsigned long long, unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned long long>>> { struct __hash_table<std::__hash_value_type<unsigned long long, unsigned long long>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned long long>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _playSessionMap;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (retain, nonatomic) NSMutableArray *logCache;
@property (nonatomic) unsigned short maxCount;

+ (id)instance;

- (void)becomActive:(unsigned long long)a0;
- (void)writeAlog;
- (void)resignActive:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (void)addLog:(id)a0 level:(long long)a1 source:(id)a2;
- (void)tryWriteAlog;
- (BOOL)allActive;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
