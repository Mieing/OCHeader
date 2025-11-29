@class NSDictionary, IESLiveBackendRequestEntity;

@interface IESLivePreBackendRequestEntity : IESLiveBackendRequestEntity

@property (retain, nonatomic) NSDictionary *bizConfig;
@property (weak, nonatomic) IESLiveBackendRequestEntity *mainEntity;
@property (nonatomic) unsigned long long requestStage;

+ (unsigned long long)requestBusinessIdentifier;

- (id)traceContext;
- (id)paramDictionary;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (BOOL)chunkedEnable;
- (id)subscribeWithBizPath:(id)a0 needCreate:(BOOL)a1;
- (id)filterImpls:(id)a0 preload:(BOOL)a1;
- (BOOL)forbiddenRealRequestWithBizPath:(id)a0 impl:(id)a1;
- (void)setBizConfig:(id)a0 stage:(unsigned long long)a1 mainEntity:(id)a2;
- (void).cxx_destruct;
- (void)clear;

@end
