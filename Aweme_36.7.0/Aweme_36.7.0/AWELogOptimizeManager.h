@class NSDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AWELogOptimizeManager : NSObject {
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } tagList;
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } logList;
    NSDictionary *config;
    unsigned long long lastday;
    long long alogForbidDay;
    BOOL enableForbidAlogAllTag;
    BOOL enableLogDownclocking;
    int _reportTickPeriod;
    NSObject<OS_dispatch_source> *_reportTimerSource;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>> { struct __tree<std::__value_type<std::string, bool>, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>>, std::allocator<std::__value_type<std::string, bool>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } downClockList;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m;
    BOOL alogDidUpload;
}

+ (void)alogSetLogDetail;
+ (id)sharedManager;

- (void)alogForbidTagList;
- (void)alogForbidList;
- (void)alogDownClockList;
- (unsigned long long)getUpdateVersionLastTime;
- (void)alogTimer;
- (void)alogDidUpload;
- (void)alogDidUploadByUser;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
