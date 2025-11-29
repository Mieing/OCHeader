@class CAGradientLayer, NSString, NSDictionary, UIView;
@protocol IESHYContainerProtocol;

@interface IESGCPXPlayGamePanelLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (nonatomic) struct CGSize { double width; double height; } configSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL firstTimeShow;
@property (nonatomic) BOOL hasBlankEdge;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (nonatomic) struct CGPoint { double x; double y; } showPoint;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (nonatomic) BOOL containerStatusOnLeft;
@property (readonly, nonatomic) BOOL isShowing;
@property (nonatomic) BOOL needMask;
@property (nonatomic) long long orientation;
@property (copy, nonatomic) id /* block */ onPanelDismissBlock;
@property (copy, nonatomic) id /* block */ updatePanelQueryItemsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (void)loadURL:(id)a0 queryItems:(id)a1;
- (void)clearLynxView;
- (id)_getValidFrameView;
- (void)_onDismissTapGesture:(id)a0;
- (void)updateQueryItems;
- (void)_configUIWithURL:(id)a0 showType:(long long)a1;
- (id)_currentPanelShowStyle;
- (void)_setupInitialFrame:(long long)a0;
- (void)_setupMaskLayerDirection;
- (void)_sendContainerStatusIfNeeded;
- (void)_reportFirstTimeShow;
- (BOOL)_isFullScreenPanelStyle;
- (void)_setupPadFramesWithSafeWidth:(double)a0 fullScreen:(BOOL)a1;
- (void)_setupPhoneFramesWithSafeWidth:(double)a0 fullScreen:(BOOL)a1;
- (double)_safeOriginYForPad;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrame;
- (long long)showType;

@end
