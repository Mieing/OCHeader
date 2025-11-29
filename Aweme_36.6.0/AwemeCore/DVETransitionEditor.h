@class NSString;
@protocol IESServiceProvider, DVENLEInterfaceProtocol, DVEEditingContextProtocol, DVECoreDraftServiceProtocol, DVECoreActionServiceProtocol, DVEPlayerServiceProtocol;

@interface DVETransitionEditor : NSObject <DVECoreTransitionProtocol>

@property (weak, nonatomic) id<DVECoreDraftServiceProtocol> draftService;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })transitionTimeForSlot:(id)a0 duration:(double)a1;
- (id)addTransitionWithEffectResource:(id)a0 resourceId:(id)a1 resourceName:(id)a2 duration:(double)a3 isOverlap:(BOOL)a4 forSlot:(id)a5;
- (void)playTransitionForSlot:(id)a0 duration:(double)a1 completeBlock:(id /* block */)a2;
- (void)deleteCurrentTransitionForSlot:(id)a0 commit:(BOOL)a1 completion:(id /* block */)a2;
- (double)getMaxTranstisionTimeBySlot:(id)a0;
- (void)addVideoTransition:(id)a0 slot:(id)a1 autoCommit:(BOOL)a2;
- (BOOL)willChangeTimeline:(id)a0 newTransition:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
