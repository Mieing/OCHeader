@class NSString;

@interface AWEPlayInteractionBottomTempAnimationManager : NSObject <AWEPlayInteractionContainerTempAnimationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showTempElement:(id)a0 currentElement:(id)a1 withDuration:(double)a2;
- (void)showTempElement:(id)a0 currentElement:(id)a1 withDuration:(double)a2 completion:(id /* block */)a3;
- (void)showTempElement:(id)a0 currentElement:(id)a1 animateBlock:(id /* block */)a2;
- (void)hideTempElement:(id)a0 currentElement:(id)a1 withDuration:(double)a2;
- (void)hideTempElement:(id)a0 currentElement:(id)a1 withDuration:(double)a2 completion:(id /* block */)a3;
- (void)hideTempElement:(id)a0 currentElement:(id)a1 animateBlock:(id /* block */)a2;
- (void)showTempElement:(id)a0 currentElement:(id)a1;
- (void)hideTempElement:(id)a0 currentElement:(id)a1;

@end
