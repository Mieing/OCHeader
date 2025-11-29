@class NSString;

@interface AWEIMInputActionBarDynamicConfigFansGroupConsumerComponent : AWEIMComponentBase <AWEIMInputActionBarDynamicConfigConsumerInterface, AWEIMInputActionBarDynamicConfigFetcherAction, AWEIMMessageBaseVCDidFetchDataAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (unsigned long long)configScene;
- (void)didFetchDynamicConfigWithResultConfig:(id)a0;
- (void)didFetchFullDetailGroupOwnerUser:(id)a0;
- (unsigned long long)configDiffScene;
- (BOOL)canConfigScene;
- (id)requestParams;

@end
