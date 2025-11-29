@interface AWEIMChatCellIncentiveComponent : AWEIMChatCellComponentBase <AWEIMGrowthImpl.IncentiveChatNotify>

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (id)presenterForSnapshot;
- (void)onCellWillRenderForCurrentComponent;
- (void)updateComponentWhenCellWillRender;
- (void)activityInfoDidChangeAt:(long long)a0;
- (void)privateChatTop3UIDDidChangeFrom:(id)a0 to:(id)a1;
- (void)userPrivateRelationDidChangeWith:(id)a0;
- (void)userGroupRelationDidChangeWith:(id)a0;
- (id)init;
- (void)dealloc;

@end
