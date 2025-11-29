@class NSString;

@interface IESLiveGameInteractModule : IESLiveModule <IESLiveGameInteractAction, IESLiveGameInteractModule>

@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)currentInteractiveScene;
- (id)provideServices;
- (void)startGameInteractWithScene:(unsigned long long)a0;
- (void)endGameInteractWithScene:(unsigned long long)a0;

@end
