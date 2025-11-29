@class NSMutableDictionary;

@interface IESIMJobManagerEnvironmentDataSource : IESIMJobManagerInnerObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } p_fetcherListMutex;
}

@property (readonly, nonatomic) NSMutableDictionary *fetcherList;

- (BOOL)injectEnvironmentFetcher:(id)a0;
- (id)p_fetchEnvironment:(id)a0;
- (id)fetchEnvironment:(id)a0;
- (id)fetchEnvironments:(id)a0;
- (int)environmentFetcherCount;
- (id)fetchAll;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0;
- (id).cxx_construct;

@end
