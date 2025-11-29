@class NSString;
@protocol IESLiveCompoundSubscription, IESLiveInteractionLayoutRouter;

@interface IESLiveInteractDynamicLayout1V6HorizontalAudienceComponent : IESLiveInteractComponentBase <IESLiveInteractDynamicLayout1V6HorizontalAudienceRouter, IESLiveAutoRotateAction>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)disposableIfNeeded;
- (id)usersManager;
- (void)componentBindContext;
- (BOOL)isVideoChatDynamicLayout1V6Horizontal;
- (BOOL)rotationForbidden;
- (void)bindLinkerUsersManager;
- (void)switchToPortraitOrientationIfNeededWithActiveList:(id)a0;
- (void).cxx_destruct;

@end
