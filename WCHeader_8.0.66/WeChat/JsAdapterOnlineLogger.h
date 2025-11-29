@interface JsAdapterOnlineLogger : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

@property (nonatomic) struct queue<std::string, std::deque<std::string>> { struct deque<std::string, std::allocator<std::string>> { struct __split_buffer<std::string *, std::allocator<std::string *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<std::string **, std::allocator<std::string *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<std::string>> { unsigned long long __value_; } __size_; } c; } logQueue;
@property (nonatomic) struct scoped_refptr<liteav::OnlineLogger> { struct OnlineLogger *ptr_; } onlineLogger;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (void)updateUrl:(id)a0;
- (void)appendLog:(id)a0;
- (void)consumeLog;
- (void)log:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
