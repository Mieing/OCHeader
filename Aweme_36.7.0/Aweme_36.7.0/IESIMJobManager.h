@class IESIMJobManagerEnvironmentFetcherJobHistory, NSString, IESIMJobManagerEventDataSource, IESIMJobManagerEnvironmentFetcherEventHistory, IESIMJobManagerJobDataSource, IESIMJobManagerTracker, IESIMJobManagerEnvironmentDataSource, IESIMJobManagerCloudController;

@interface IESIMJobManager : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_jobCheckMutex;
}

@property (readonly, nonatomic) IESIMJobManagerJobDataSource *jobSource;
@property (readonly, nonatomic) IESIMJobManagerEnvironmentDataSource *feeler;
@property (readonly, nonatomic) IESIMJobManagerEventDataSource *eventSource;
@property (readonly, nonatomic) IESIMJobManagerCloudController *cloudController;
@property (readonly, nonatomic) IESIMJobManagerTracker *tracker;
@property (readonly, nonatomic) IESIMJobManagerEnvironmentFetcherJobHistory *jobHistory;
@property (readonly, nonatomic) IESIMJobManagerEnvironmentFetcherEventHistory *eventHistory;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueName;

- (BOOL)registerJobMeta:(id)a0;
- (BOOL)injectEnvironmentFetcher:(id)a0;
- (void)fireEvent:(id)a0 extra:(id)a1;
- (void)waitForJobDoneWithJobName:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithName:(id)a0;

@end
