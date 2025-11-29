@class NSString;

@interface PuzzleLatchEngine : NSObject <PuzzleLatchEngineProtocol, PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)providePuzzleLatchEngineProtocol:(id)a0;
+ (id)sharedEngine;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (id)getUniqueLatchID;
- (void)evaluatePrefetch:(id)a0;
- (void)stopEvaluateIfNeeded:(id)a0;
- (void)injectLynxViewWithBuilder:(id)a0 latchID:(id)a1 business:(id)a2 url:(id)a3;
- (void)setLatchID:(id)a0 forLynxView:(id)a1;

@end
