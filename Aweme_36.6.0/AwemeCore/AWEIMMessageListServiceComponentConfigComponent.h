@class NSArray, NSString, AWEIMServiceComponentConfig;

@interface AWEIMMessageListServiceComponentConfigComponent : AWEIMComponentBase <AWEIMMessageListServiceComponentConfigInterface>

@property (retain) AWEIMServiceComponentConfig *serviceComponentConfig;
@property (retain) NSArray *serviceComponentConfigDiffArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_sortComponentItemConfigsUsingPriority;
- (void)p_filterNotShowComponentItemConfigs;
- (void)p_supplementComponentInfoForComponentItemConfigs;
- (void)p_requestDynamicComponentItemConfigsWithConversation:(id)a0 completion:(id /* block */)a1;
- (id)getServiceComponentConfigTaskWithScene:(unsigned long long)a0 DiffScene:(unsigned long long)a1;
- (id)p_resolvedExtraParams:(id)a0;
- (id)getServiceComponentConfigWithConversation:(id)a0 scene:(unsigned long long)a1;
- (id)getDiffServiceComponentConfigsWithConversation:(id)a0 scene:(unsigned long long)a1;
- (void)p_updateServiceComponentConfigUsingDiffConfigWithScene:(unsigned long long)a0 DiffScene:(unsigned long long)a1;
- (void)p_filterDynamicComponentItemConfigs;
- (void).cxx_destruct;

@end
