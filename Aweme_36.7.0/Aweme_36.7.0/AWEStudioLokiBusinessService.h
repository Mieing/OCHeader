@class NSString;

@interface AWEStudioLokiBusinessService : NSObject <AWEStudioLokiService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchEffectResourceWithPanel:(id)a0 category:(id)a1 cacheValid:(BOOL)a2 completion:(id /* block */)a3;
- (id)resourceReadyEffectModelWithPanel:(id)a0 category:(id)a1;
- (void)fetchEffectResourceWithEffect:(id)a0 completion:(id /* block */)a1;
- (void)fetchEffectModelWithPanel:(id)a0 category:(id)a1 completion:(id /* block */)a2;
- (id)cachedEffectModelWithPanel:(id)a0 category:(id)a1;

@end
