@class NSString;

@interface AWEPlayInteractionFirstFrameOptimizeFeedController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)willPlayCell:(id)a0 indexPath:(id)a1 currentModel:(id)a2;

@end
