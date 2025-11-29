@class NSMutableDictionary;

@interface IESIMJobManagerJobDataSource : IESIMJobManagerInnerObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_metaDictLock;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_instDictLock;
}

@property (readonly, nonatomic) NSMutableDictionary *jobNameToMetaInfo;
@property (readonly, nonatomic) NSMutableDictionary *jobNameToJob;

- (BOOL)registerJobMeta:(id)a0;
- (id)jobWithEvent:(id)a0;
- (id)existedJobWithName:(id)a0;
- (id)p_currentJobFromMeta:(id)a0;
- (id)p_createAndRecordJobFromMeta:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (id).cxx_construct;
- (int)jobCount;

@end
