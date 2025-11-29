@protocol AWEAwemePlayInteractionPanelControllerProtocol, AWEAwemePlayInteractionPlayDelegate;

@interface AWEECFeedVideoResizeManager : NSObject

@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate> interactionController;

- (id)initWithPanelController:(id)a0 interactionController:(id)a1;
- (void)changeVideoWhenShowGoodsPanel:(BOOL)a0;
- (void)goodsPanelMoveProgress:(double)a0;
- (id)panelControllerForResizeVideo;
- (BOOL)canShrink;
- (BOOL)albumSupportShrink;
- (void).cxx_destruct;
- (void)dealloc;

@end
