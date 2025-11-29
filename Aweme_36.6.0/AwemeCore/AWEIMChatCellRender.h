@interface AWEIMChatCellRender : NSObject

- (void)layoutPresenters:(id)a0 inCell:(id)a1 targetPresenter:(id)a2;
- (void)renderViewModel:(id)a0 inCell:(id)a1;
- (void)p_dispatchWillRenderEvent:(id)a0 inCell:(id)a1;
- (id)p_findOrBuildviewForPresenter:(id)a0 inCell:(id)a1;
- (void)p_clearDirtyViews:(id)a0 inCell:(id)a1;
- (void)p_arrangementTopContainer:(id)a0 inCell:(id)a1;
- (void)p_arrangementCenterContainer:(id)a0 inCell:(id)a1;
- (void)p_arrangementTailContainer:(id)a0 inCell:(id)a1;
- (void)p_arrangementTailUpperContainer:(id)a0 tailCenterContainer:(id)a1 tailLowerContainer:(id)a2 inCell:(id)a3;
- (void)p_arrangementBottomContainer:(id)a0 inCell:(id)a1;
- (void)p_arrangementContainer:(id)a0 withViews:(id)a1;

@end
