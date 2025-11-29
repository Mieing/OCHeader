@class NSString;

@interface IESLivePuzzleStateCenterCreator : NSObject <PuzzleKitViewLifeCycleProtocol, PuzzleLatchStateCenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedCreator;
+ (id)providePuzzleLatchStateCenterProtocol:(id)a0;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)kitViewWillDealloc:(id)a0;
- (id)getDefaultInitialPropsWithKitView:(id)a0 context:(id)a1;
- (id)currentStateWithKitView:(id)a0 context:(id)a1;

@end
