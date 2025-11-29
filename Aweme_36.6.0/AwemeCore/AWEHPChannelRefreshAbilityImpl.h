@class NSString;

@interface AWEHPChannelRefreshAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelRefreshAbility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)cancelRefreshWithCompletion:(id /* block */)a0;

@end
