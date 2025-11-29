@class HMInstanceConfig;

@interface HMInstance : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct unique_ptr<hermas::Hermas, std::default_delete<hermas::Hermas>> { struct __compressed_pair<hermas::Hermas *, std::default_delete<hermas::Hermas>> { struct Hermas *__value_; } __ptr_; } _hermas;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _aid;
    BOOL _enableLogTypeFlowControl;
}

@property (readonly, nonatomic) HMInstanceConfig *config;

- (void)cleanAllCache;
- (void)recordData:(id)a0;
- (void)recordData:(id)a0 priority:(unsigned long long)a1;
- (void)uploadWithFlushImmediately;
- (void)flushAggregatedData:(BOOL)a0;
- (void)flushSemifinishedRecords:(BOOL)a0;
- (BOOL)isDropData;
- (void)recordData:(id)a0 priority:(unsigned long long)a1 forceSave:(BOOL)a2;
- (void)aggregateData:(id)a0;
- (void)startSemiTraceRecord:(id)a0;
- (void)recordLocal:(id)a0 forceSave:(BOOL)a1;
- (void)finishSemiTraceRecord:(id)a0 WithSpanIdList:(id)a1;
- (void)startSemiSpanRecord:(id)a0;
- (void)finishSemiSpanRecord:(id)a0;
- (void)deleteSemifinishedRecords:(id)a0 WithSpanIdList:(id)a1;
- (void)uploadLocalData;
- (id)searchWithCondition:(id)a0;
- (void)__buildHermasInstance;
- (BOOL)__isBlockedByLogType:(id)a0;
- (struct shared_ptr<hermas::ConditionNode> { struct ConditionNode *x0; struct __shared_weak_count *x1; })nodeWithCondition:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;
- (BOOL)isServerAvailable;

@end
