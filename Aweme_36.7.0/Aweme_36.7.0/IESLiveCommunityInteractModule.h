@class NSString;
@protocol IESLiveCommunityInteractionSubInterface;

@interface IESLiveCommunityInteractModule : IESLiveModule <IESLiveCommunityInteractAction, IESLiveCommunityInteractModule>

@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveCommunityInteractionSubInterface> communityInteractSubInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)currentInteractiveScene;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamRect;
- (void)startCommunityInteractWithScene:(unsigned long long)a0;
- (void)endCommunityInteractWithScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
