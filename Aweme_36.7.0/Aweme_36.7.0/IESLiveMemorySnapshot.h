@class NSMutableDictionary, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveMemorySnapshot : NSObject {
    struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } onceAllocTime;
    struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } onceMemorySlice;
    struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } preMemorySnapshot;
    struct vector<std::vector<std::pair<Class, int>>, std::allocator<std::vector<std::pair<Class, int>>>> { void *__begin_; void *__end_; void *__cap_; } memorySlices;
    struct vector<std::vector<std::pair<Class, int>>, std::allocator<std::vector<std::pair<Class, int>>>> { void *__begin_; void *__end_; void *__cap_; } allocTimeSlices;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *samplingQueue;
@property (retain, nonatomic) id memoryWarningObserver;
@property (nonatomic) long long memoryWarning;
@property (nonatomic) long long memorystacking;
@property (nonatomic) BOOL buildBusiness;
@property (retain, nonatomic) NSMutableArray *snapshotHeaders;
@property (retain, nonatomic) NSMutableDictionary *preMatching;
@property (retain, nonatomic) NSDictionary *memoryMetrics;

+ (id)sharedInstance;

- (void)syncGenerateSnapshot;
- (id)samplingHeader;
- (void)sortSnapshot;
- (void)trackerMemoryDiagnoseWithParams:(id)a0 model:(long long)a1 metrics:(id)a2;
- (id)constructMetrics;
- (void)matchingLeaksDiff:(struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })a0 metrics:(id)a1;
- (id)calculateIncrementWithSource:(struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })a0 destSource:(struct unordered_map<Class, int, std::hash<Class>, std::equal_to<Class>, std::allocator<std::pair<const Class, int>>> { struct __hash_table<std::__hash_value_type<Class, int>, std::__unordered_map_hasher<Class, std::__hash_value_type<Class, int>, std::hash<Class>, std::equal_to<Class>>, std::__unordered_map_equal<Class, std::__hash_value_type<Class, int>, std::equal_to<Class>, std::hash<Class>>, std::allocator<std::__hash_value_type<Class, int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<Class, int>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })a1;
- (id)mapMemorySliceToDictionary;
- (id)mapKeySlicesToDictionary;
- (id)mapSingleMemorySlice;
- (void)trackerMemoryWithCategory:(id)a0 memoryData:(id)a1 instanceMetrics:(id)a2;
- (void)cleanSnapshot;
- (id)handlerKeyObjectsMetrics:(id)a0;
- (void)cleanTrackCache;
- (void)buildWatchBusinessInfo;
- (void)asyncGenerateSnapshot;
- (id)instanceSnapshot;
- (void)willMemoryLeaksDecide;
- (void)willReportMemorySlices:(id /* block */)a0;
- (void)outMemorySampling:(id)a0;
- (id)mapAllocTimesToDictionary;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end
