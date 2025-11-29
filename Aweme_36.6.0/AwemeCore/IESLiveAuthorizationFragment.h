@class NSString, IESLiveAuthorizationViewModel, IESLiveAuthorizationGuidePanel;
@protocol IESLiveInternalRouter;

@interface IESLiveAuthorizationFragment : IESLiveRoomComponent <IESLiveAuthorizationReaction, IESLiveAuthorizationGuideRouter>

@property (retain, nonatomic) IESLiveAuthorizationViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESLiveAuthorizationGuidePanel *currentPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)checkAndShowAuthorizationGuideWithSource:(unsigned long long)a0 completeBlock:(id /* block */)a1;
- (void)showAuthorizationGuideViewWith:(id)a0 source:(unsigned long long)a1 completeBlock:(id /* block */)a2;
- (void)showAuthorizationGuideTopViewWithSource:(id)a0 labelText:(id)a1 content:(id)a2 showRelation:(BOOL)a3 relationContent:(id)a4;
- (void).cxx_destruct;

@end
