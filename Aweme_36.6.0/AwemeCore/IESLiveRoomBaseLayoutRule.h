@interface IESLiveRoomBaseLayoutRule : IESLiveStackDynamicRule

- (id)attachingDIContext;
- (BOOL)enableLandscapeMarginOptimize;
- (void)executeAtState:(unsigned long long)a0 managedStack:(id)a1;
- (double)landscapeBottomOffset;
- (void)parseLayout:(id)a0 ruleController:(id)a1;
- (void)parseLayout:(id)a0 forContainerIdentifier:(id)a1;
- (double)landscapeHorizontalOffset;
- (double)landscapeSideMargin;
- (BOOL)landscapeStatusBarDisplayEnable;
- (double)horizontalOffset;
- (double)bottomOffset;

@end
