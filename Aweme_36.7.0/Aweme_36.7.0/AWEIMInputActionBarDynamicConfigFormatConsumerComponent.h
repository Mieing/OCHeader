@class NSString;

@interface AWEIMInputActionBarDynamicConfigFormatConsumerComponent : AWEIMComponentBase <AWEIMInputActionBarDynamicConfigConsumerInterface, AWEIMInputActionBarDynamicConfigFetcherAction, AWEIMMessageBaseVCDidFetchDataAction, AWEIMMessageListUserInfoAction>

@property (nonatomic) BOOL shouldRefetchDynamicConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didFetchFullDetailUser:(id)a0 fullDetailUser:(id)a1;
- (unsigned long long)configScene;
- (void)didFetchDynamicConfigWithResultConfig:(id)a0;
- (void)didFetchFullDetailPeerUser:(id)a0;
- (unsigned long long)configDiffScene;
- (BOOL)canConfigScene;
- (id)requestParams;

@end
