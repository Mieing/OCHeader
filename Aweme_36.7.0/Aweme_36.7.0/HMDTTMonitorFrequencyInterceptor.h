@class NSObject, NSMutableDictionary, HMDGCDTimer;
@protocol OS_dispatch_queue;

@interface HMDTTMonitorFrequencyInterceptor : HMDTTMonitorBaseInterceptor {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct unordered_map<std::string, EventFrequency, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, EventFrequency>>> { struct __hash_table<std::__hash_value_type<std::string, EventFrequency>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, EventFrequency>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, EventFrequency>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, EventFrequency>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, EventFrequency>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, EventFrequency>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, EventFrequency>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } _statistic;
}

@property (retain, nonatomic) HMDGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;
@property (retain, nonatomic) NSMutableDictionary *reportRecords;

- (id)__detectSetting;
- (void)__createTimerIfNeededWithLock;
- (void)__reportIssueWithEventName:(id)a0 count:(long long)a1 duration:(double)a2 timestamp:(double)a3 backtrace:(id)a4 setting:(id)a5;
- (void)__onTimerTick;
- (void).cxx_destruct;
- (id)init;
- (void)handleRequest:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
