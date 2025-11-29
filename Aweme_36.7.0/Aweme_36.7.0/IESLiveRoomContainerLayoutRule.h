@class IESLiveLayoutBaseContainer;

@interface IESLiveRoomContainerLayoutRule : IESLiveRoomBaseLayoutRule

@property (weak, nonatomic) IESLiveLayoutBaseContainer *container;

- (void)switchToSideMode;
- (void)switchToNormalMode;
- (double)landscapeAllAroundBtnMargin;
- (void)executeAtState:(unsigned long long)a0 managedStack:(id)a1;
- (double)topOffsetWith:(long long)a0;
- (void).cxx_destruct;

@end
