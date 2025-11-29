@class NSString, BDPUniqueID, UIView;

@interface BDPVConsoleWebView : BDPBridgeWebView <BDPWebViewImplInterface, BDPBusinessEnginePublishProtocol, BDPAppInterfaceOrientationChangeMessage, UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL isInteractGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDestFrame:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })getCorrectScreenSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDestFrame:(BOOL)a0 screenSize:(struct CGSize { double x0; double x1; })a1;

- (void)setDeviceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)webView:(id)a0 publish:(id)a1 completion:(id /* block */)a2;
- (void)subscribeHandler:(id)a0 data:(id)a1;
- (void)instance:(id)a0 publish:(id)a1 dest:(unsigned long long)a2 param:(id)a3;
- (void)showAnimatedInView:(id)a0;
- (void)setupServicePublish;
- (void)setupVConsoleContent;
- (void)showAnimated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getGameDestFrame:(BOOL)a0;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)log:(id)a0;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
