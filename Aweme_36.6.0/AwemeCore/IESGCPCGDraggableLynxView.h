@class NSString, NSDictionary, UIView, IESGCPCGStandardizedLynxViewConfig;
@protocol IESHYContainerProtocol, IESGCPCGDraggableLynxViewDelegate;

@interface IESGCPCGDraggableLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGDraggableContainerProtocol, IESGCPCGStandardizedLynxView>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGSize { double width; double height; } configSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isLynxLoadFailed;
@property (copy, nonatomic) NSDictionary *containerDic;
@property (weak, nonatomic) id<IESGCPCGDraggableLynxViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESGCPCGStandardizedLynxViewConfig *config;
@property (nonatomic, getter=isReady) BOOL ready;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)showOnView:(id)a0;
- (BOOL)needTransitionAnimation;
- (void)_clearLynxView;
- (void)_setupConstraint;
- (struct CGSize { double x0; double x1; })expectedContainerSize;
- (BOOL)isMainDecoration;
- (struct CGPoint { double x0; double x1; })expectedContainerPosition;
- (BOOL)attachToSide;
- (double)attachToSideDelayTime;
- (double)attachAnimationDuration;
- (BOOL)forbidPan;
- (BOOL)shouldFold;
- (double)foldDelayTime;
- (double)foldAnimationDuration;
- (double)foldHiddenLength;
- (BOOL)foldNeededScale;
- (BOOL)needAutoDismiss;
- (double)timeForAutoDismiss;
- (void)loadURL:(id)a0 queryItems:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
