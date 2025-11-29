@class NSString;

@interface RTVBubbleIMP : NSObject <RTVBubbleGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showBubble:(id)a0 forView:(id)a1 inContainerView:(id)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 inDirection:(unsigned long long)a4 bgStyle:(unsigned long long)a5 completion:(id /* block */)a6;
- (id)showBubble:(id)a0 forView:(id)a1 inContainerView:(id)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 inDirection:(unsigned long long)a4 bgStyle:(unsigned long long)a5 showDuration:(double)a6 completion:(id /* block */)a7;
- (id)showBubbleWithCustomView:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forView:(id)a2 inContainerView:(id)a3 fromAnchor:(struct CGPoint { double x0; double x1; })a4 inDirection:(unsigned long long)a5 anchorAdjustment:(struct CGPoint { double x0; double x1; })a6 bgStyle:(unsigned long long)a7 completion:(id /* block */)a8;
- (void)dismissBubble:(id)a0;
- (void)dismissBubbleWithAnimation:(id)a0;

@end
