@class NSString, AWEHPCombineSubscriberWrapper;
@protocol AWEHPCombineSubscriberAbilityImpl;

@interface AWEHPCombineSubscriberAbilityImpl : NSObject <AWEHPNetCombineSubscriberAbility>

@property (weak, nonatomic) id<AWEHPCombineSubscriberAbilityImpl> target;
@property (weak, nonatomic) AWEHPCombineSubscriberWrapper *wrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRequestWithBody:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
