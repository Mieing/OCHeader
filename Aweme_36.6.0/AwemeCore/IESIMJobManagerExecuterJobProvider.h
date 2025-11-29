@class NSArray, IESIMJobManagerEvent;

@interface IESIMJobManagerExecuterJobProvider : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } containerMutex;
    struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } anyQueueReadyCondition;
    struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } mainQueueReadyCondition;
    struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } subQueueReadyCondition;
    struct map<std::string, (anonymous namespace)::shadowJob, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::shadowJob>>> { struct __tree<std::__value_type<std::string, (anonymous namespace)::shadowJob>, std::__map_value_compare<std::string, std::__value_type<std::string, (anonymous namespace)::shadowJob>, std::less<std::string>>, std::allocator<std::__value_type<std::string, (anonymous namespace)::shadowJob>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } pendingJobMap;
    struct priority_queue<(anonymous namespace)::shadowJob, std::vector<(anonymous namespace)::shadowJob>, std::less<(anonymous namespace)::shadowJob>> { struct vector<(anonymous namespace)::shadowJob, std::allocator<(anonymous namespace)::shadowJob>> { struct shadowJob *__begin_; struct shadowJob *__end_; struct shadowJob *__cap_; } c; struct less<(anonymous namespace)::shadowJob> { } comp; } mainQueueReadyJobQueue;
    struct priority_queue<(anonymous namespace)::shadowJob, std::vector<(anonymous namespace)::shadowJob>, std::less<(anonymous namespace)::shadowJob>> { struct vector<(anonymous namespace)::shadowJob, std::allocator<(anonymous namespace)::shadowJob>> { struct shadowJob *__begin_; struct shadowJob *__end_; struct shadowJob *__cap_; } c; struct less<(anonymous namespace)::shadowJob> { } comp; } subQueueReadyJobQueue;
    struct priority_queue<(anonymous namespace)::shadowJob, std::vector<(anonymous namespace)::shadowJob>, std::less<(anonymous namespace)::shadowJob>> { struct vector<(anonymous namespace)::shadowJob, std::allocator<(anonymous namespace)::shadowJob>> { struct shadowJob *__begin_; struct shadowJob *__end_; struct shadowJob *__cap_; } c; struct less<(anonymous namespace)::shadowJob> { } comp; } delayJobQueue;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } jobNameToId;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } jobNameToOutDeg;
    struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } revDepMap;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } runningJobNameSet;
}

@property (readonly, nonatomic) NSArray *jobList;
@property (readonly, nonatomic) IESIMJobManagerEvent *event;
@property (nonatomic) BOOL shouldTerminate;
@property (readonly, nonatomic) double createTimeStamp;
@property (nonatomic) unsigned int mainQueueJobCount;
@property (nonatomic) unsigned int subQueueJobCount;

- (id)initWithJobList:(id)a0 event:(id)a1;
- (id)nextMainQueueJob;
- (id)nextSubQueueJob;
- (id)nextAnyQueueJob;
- (void)onJobDone:(id)a0;
- (void)p_loadJobs:(id)a0;
- (id)p_nextJobOfContainer:(struct vector<std::reference_wrapper<std::priority_queue<(anonymous namespace)::shadowJob>>, std::allocator<std::reference_wrapper<std::priority_queue<(anonymous namespace)::shadowJob>>>> { void *x0; void *x1; void *x2; })a0 remainCount:(struct vector<std::reference_wrapper<unsigned int>, std::allocator<std::reference_wrapper<unsigned int>>> { void *x0; void *x1; void *x2; })a1 conditions:(struct vector<std::reference_wrapper<std::condition_variable>, std::allocator<std::reference_wrapper<std::condition_variable>>> { void *x0; void *x1; void *x2; })a2;
- (BOOL)p_deadLockCheck;
- (BOOL)p_allDoneCheck;
- (BOOL)p_tryReleaseDelayJobs;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
