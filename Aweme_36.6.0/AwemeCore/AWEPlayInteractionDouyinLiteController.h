@class NSString;

@interface AWEPlayInteractionDouyinLiteController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;

- (void)onPlayer:(id)a0 didSingleClick:(id)a1;
- (id)aAWEMainModuleDOUYINLiteAdapter;

@end
