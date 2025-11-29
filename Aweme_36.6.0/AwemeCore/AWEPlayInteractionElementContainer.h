@class NSString;

@interface AWEPlayInteractionElementContainer : AWEElementContainer <AWEElementContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addElementByClassName:(id)a0 withParamDict:(id)a1;
- (void)hideAllElements:(BOOL)a0 animate:(BOOL)a1 duration:(double)a2 hiddenTranform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 exceptArray:(id)a4 animateBlock:(id /* block */)a5;

@end
