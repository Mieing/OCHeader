@class NSString;

@interface IESLivePuzzleTransitionServiceIMP : NSObject <PuzzleTransitionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceUpdateToPortraitWith:(id /* block */)a0;
- (id)p_containerController:(unsigned long long)a0 targetView:(id *)a1 context:(id)a2;
- (void)p_beforeTransition:(id /* block */)a0 context:(id)a1;
- (BOOL)isInLiveRoom:(id)a0;
- (void)customDelayForRemoveSamePage:(id /* block */)a0 context:(id)a1;
- (id)p_containerController:(BOOL)a0 useKeyWindow:(BOOL)a1;
- (id)p_newContainerController:(BOOL)a0 useKeyWindow:(BOOL)a1;
- (id)useKeyWindowTopVC:(BOOL)a0;

@end
