@class NSString;

@interface AWEACCBubbleImpl : HTSService <ACCBubbleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeBubble:(id)a0;
- (id)showBubble:(id)a0 forView:(id)a1 inContainerView:(id)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 inDirection:(unsigned long long)a4 bgStyle:(unsigned long long)a5 completion:(id /* block */)a6;
- (id)showBubble:(id)a0 forView:(id)a1 inContainerView:(id)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 inDirection:(unsigned long long)a4 bgStyle:(unsigned long long)a5 showDuration:(double)a6 completion:(id /* block */)a7;
- (id)showBubbleWithCustomView:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forView:(id)a2 inContainerView:(id)a3 fromAnchor:(struct CGPoint { double x0; double x1; })a4 inDirection:(unsigned long long)a5 anchorAdjustment:(struct CGPoint { double x0; double x1; })a6 bgStyle:(unsigned long long)a7 completion:(id /* block */)a8;
- (id)showBubble:(id)a0 forView:(id)a1 inDirection:(unsigned long long)a2 bgStyle:(unsigned long long)a3;
- (id)showBubble:(id)a0 forView:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 bgStyle:(unsigned long long)a4;
- (id)showBubble:(id)a0 forView:(id)a1 anchorAdjustment:(struct CGPoint { double x0; double x1; })a2 inDirection:(unsigned long long)a3 bgStyle:(unsigned long long)a4 completion:(id /* block */)a5;
- (id)showBubble:(id)a0 forView:(id)a1 inContainerView:(id)a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 inDirection:(unsigned long long)a4 bgStyle:(unsigned long long)a5 numberOfLines:(unsigned long long)a6 completion:(id /* block */)a7;
- (id)showBubbleWithCustomView:(id)a0 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 forView:(id)a2 inContainerView:(id)a3 fromAnchor:(struct CGPoint { double x0; double x1; })a4 inDirection:(unsigned long long)a5 anchorAdjustment:(struct CGPoint { double x0; double x1; })a6 cornerAdjustment:(struct CGPoint { double x0; double x1; })a7 bgStyle:(unsigned long long)a8 completion:(id /* block */)a9;
- (id)showBubble:(id)a0 forView:(id)a1 iconView:(id)a2 iconViewInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 fromAnchor:(struct CGPoint { double x0; double x1; })a4 anchorAdjustment:(struct CGPoint { double x0; double x1; })a5 cornerAdjustment:(struct CGPoint { double x0; double x1; })a6 fixedSize:(struct CGSize { double x0; double x1; })a7 direction:(unsigned long long)a8 bgStyle:(unsigned long long)a9 completion:(id /* block */)a10;
- (id)showBubble:(id)a0 forView:(id)a1 iconView:(id)a2 inContainerView:(id)a3 iconViewInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 fromAnchor:(struct CGPoint { double x0; double x1; })a5 anchorAdjustment:(struct CGPoint { double x0; double x1; })a6 cornerAdjustment:(struct CGPoint { double x0; double x1; })a7 fixedSize:(struct CGSize { double x0; double x1; })a8 direction:(unsigned long long)a9 bgStyle:(unsigned long long)a10 completion:(id /* block */)a11;
- (id)showBubble:(id)a0 forView:(id)a1 iconView:(id)a2 inContainerView:(id)a3 iconViewInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 fromAnchor:(struct CGPoint { double x0; double x1; })a5 anchorAdjustment:(struct CGPoint { double x0; double x1; })a6 cornerAdjustment:(struct CGPoint { double x0; double x1; })a7 fixedSize:(struct CGSize { double x0; double x1; })a8 direction:(unsigned long long)a9 bgStyle:(unsigned long long)a10 showDuration:(double)a11 completion:(id /* block */)a12;
- (id)showBubble:(id)a0 forView:(id)a1 fromAnchor:(struct CGPoint { double x0; double x1; })a2 anchorAdjustment:(struct CGPoint { double x0; double x1; })a3 cornerAdjustment:(struct CGPoint { double x0; double x1; })a4 fixedSize:(struct CGSize { double x0; double x1; })a5 inDirection:(unsigned long long)a6 bgStyle:(unsigned long long)a7 completion:(id /* block */)a8;
- (id)showAttributedBubble:(id)a0 withCustomImage:(id)a1 imageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 textInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 fixedSize:(struct CGSize { double x0; double x1; })a4 needFixedWidth:(BOOL)a5 forView:(id)a6 inContainerView:(id)a7 fromAnchor:(struct CGPoint { double x0; double x1; })a8 inDirection:(unsigned long long)a9 anchorAdjustment:(struct CGPoint { double x0; double x1; })a10 completion:(id /* block */)a11;
- (void)bubble:(id)a0 textAlignment:(long long)a1;
- (void)bubble:(id)a0 textNumberOfLines:(long long)a1;
- (void)bubble:(id)a0 supportTapToDismiss:(BOOL)a1;
- (void)tapToDismissWithBubble:(id)a0;
- (void)redoLayout:(id)a0;

@end
