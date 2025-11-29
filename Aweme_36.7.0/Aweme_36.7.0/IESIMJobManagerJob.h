@class IESIMJobManagerJobMetaInfo, NSString, NSArray, IESIMJobManagerEvent;

@interface IESIMJobManagerJob : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_statusMutex;
    struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } p_statusCondition;
}

@property (readonly, nonatomic) IESIMJobManagerJobMetaInfo *meta;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSString *jobName;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, copy, nonatomic) NSArray *dependJobsNames;
@property (readonly, copy, nonatomic) NSArray *dependJobs;
@property (readonly, nonatomic) IESIMJobManagerEvent *causedByEvent;
@property (readonly, nonatomic) BOOL runOnMainQueue;
@property (readonly, nonatomic) BOOL isSyncBody;
@property (readonly, nonatomic) BOOL shouldBlock;
@property (readonly, nonatomic) BOOL shouldRunInMainQueue;
@property (readonly, nonatomic) int delayDuration;
@property (readonly, nonatomic) unsigned long long sortOrder;

- (BOOL)shouldRunOnEvent:(id)a0;
- (BOOL)moveStatusFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)waitForDone;
- (id)dependencyOnEvent:(id)a0;
- (void)runOnEvent:(id)a0;
- (id)initWithMeta:(id)a0;
- (BOOL)shouldRecreateOnEvent:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;

@end
