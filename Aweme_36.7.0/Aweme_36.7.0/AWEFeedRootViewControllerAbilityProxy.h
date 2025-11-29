@class NSString, AWEFeedContainerViewController;
@protocol AWEFeedRootViewControllerAbilityCallProtocol;

@interface AWEFeedRootViewControllerAbilityProxy : NSObject <AWEFeedRootViewControllerAbility>

@property (weak, nonatomic) AWEFeedContainerViewController *feedContainerViewController;
@property (weak, nonatomic) id<AWEFeedRootViewControllerAbilityCallProtocol> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithModel:(id)a0 completion:(id /* block */)a1;
- (void)showBackgroundImagesWithProgress:(double)a0;
- (void)cancelDragRefreshGesture;
- (void).cxx_destruct;
- (void)cancelRefreshWithCompletion:(id /* block */)a0;

@end
