@class NSString;

@interface LSIMUIServiceImpl : NSObject <LSIMUIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createGradientView;
- (id)createLoadingView;
- (id)createActionSheet;
- (void)showToastText:(id)a0;
- (id)createMJRefreshHeader;
- (id)createMJRefreshFooter;
- (void)showToastText:(id)a0 onView:(id)a1;
- (id)createLoadingToast;
- (Class)alertControllerClass;
- (void)showMessageMenuForBubbleView:(id)a0 tapLocation:(struct CGPoint { double x0; double x1; })a1 locationInView:(id)a2 menuItemList:(id)a3;
- (id)createZoomableViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)createLoadingCircleView;
- (id)createSwitch;
- (id)createLynxModel;
- (id)createLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lynxModel:(id)a1 extraParams:(id)a2 delegate:(id)a3;
- (BOOL)enableSystemMessageMenu;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bubbleFrameInScreen:(id)a0;
- (struct CGPoint { double x0; double x1; })tapLocationInScreenAtLocation:(struct CGPoint { double x0; double x1; })a0 locationInView:(id)a1;
- (id)menuItems:(id)a0;
- (id)createAlertDialog;

@end
