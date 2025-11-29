@class NSString;

@interface AWEUltraCreationServiceImpl : HTSService <ACCCreationToolService, AWEUltraCreationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startCreationWithConfig:(id)a0 beforeInject:(id /* block */)a1 enterCompletion:(id /* block */)a2 finishResultCallback:(id /* block */)a3;

@end
