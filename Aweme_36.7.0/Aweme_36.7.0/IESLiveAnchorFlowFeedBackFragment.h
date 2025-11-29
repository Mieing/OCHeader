@interface IESLiveAnchorFlowFeedBackFragment : IESLiveRoomComponent

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)setupToolbarItem;
- (BOOL)redDotHasShow;
- (void)handleItemShow:(id)a0;
- (void)handleItemTapped:(id)a0;
- (void)trackItemEventWithName:(id)a0;
- (void)handleItemRedDot:(id)a0;
- (void)openFlowFeedBackPage;
- (void)setRedDotShow:(BOOL)a0;
- (id)uniqueKeyForIdentifier:(id)a0;
- (id)redDotShowKey;

@end
