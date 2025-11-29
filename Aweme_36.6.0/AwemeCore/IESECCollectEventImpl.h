@class IESECCollectViewController, IESECCollectStashedEventsHelper;

@interface IESECCollectEventImpl : IESECYataCommonEventImpl

@property (retain, nonatomic) IESECCollectStashedEventsHelper *stashedEventsHandler;
@property (weak, nonatomic) IESECCollectViewController *hostVC;

- (void)selfHandleEventWhenAppearWithEventData:(id)a0;
- (void)selfScrollToTopWithEventData:(id)a0;
- (void)selfCheckFooterWithRenderNodeDataDict:(id)a0 accumulateDict:(id *)a1;
- (void)selfOpenOrCloseSortPanelWithEventData:(id)a0;
- (void)selfQuitCollectWithEventData:(id)a0;
- (void)selfPreCheckWithEventData:(id)a0;
- (void).cxx_destruct;

@end
