@class ARTModel, NSString, ARTBusinessCfgCond;
@protocol ARTBusinessSrvProtocol;

@interface ARTBusinessCfg : NSObject {
    struct LockObj { struct RWLock { struct shared_timed_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x0; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x1; struct condition_variable { struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x0; } x2; unsigned int x3; } x0; } x0; } x0; } *_modelRWLock;
}

@property (retain, nonatomic) ARTModel *model;
@property (readonly, nonatomic) long long modelStatus;
@property (copy, nonatomic) NSString *businessID;
@property (nonatomic) long long service;
@property (readonly, nonatomic) ARTBusinessCfgCond *cond;
@property (retain, nonatomic) id<ARTBusinessSrvProtocol> impl;

- (id)initWithBusinessId:(id)a0 impl:(id)a1;
- (void)updateModelWithName:(id)a0 path:(id)a1;
- (void)updateModelStatusTo:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)modelObject;

@end
