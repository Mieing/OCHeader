@class AWEPlayInteractionViewController, AWEElementContainer, AWEPlayInteractionContext, AWEPlayInteractionDispatcherManager;

@interface AWEPlayInteractionBaseController : AWEPlayInteractionNewBaseController

@property (readonly, weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly, weak, nonatomic) AWEPlayInteractionViewController *container;
@property (readonly, weak, nonatomic) AWEPlayInteractionDispatcherManager *dispatcherManager;
@property (readonly, weak, nonatomic) AWEElementContainer *immersiveBottomContainer;
@property (readonly, weak, nonatomic) AWEElementContainer *playletRecommendBottomContainer;

@end
