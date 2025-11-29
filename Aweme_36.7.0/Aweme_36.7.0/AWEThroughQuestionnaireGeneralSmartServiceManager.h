@class NSString, NSMutableDictionary;

@interface AWEThroughQuestionnaireGeneralSmartServiceManager : HTSService <AWEThroughQuestionnaireGeneralSmartServiceManager> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *serviceMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceKeyFormType:(unsigned long long)a0 referString:(id)a1;
- (id)setupServiceWithType:(unsigned long long)a0 configBuilder:(id /* block */)a1;
- (id)getServiceWithType:(unsigned long long)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
