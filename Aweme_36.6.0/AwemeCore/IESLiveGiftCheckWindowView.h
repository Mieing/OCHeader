@interface IESLiveGiftCheckWindowView : IESLiveGiftDynamicPanelEventThroughView

@property (nonatomic) BOOL hasMoveToWindow;
@property (copy, nonatomic) id /* block */ didMoveToWindowAction;

- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
