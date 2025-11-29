@class NSMapTable, NSString, UIView, IESLiveLinkmicCanvasView, IESLiveLinkmicCanvasViewModel;
@protocol IESLiveLinkmicCanvasViewManagerDataSource, IESLiveLinkmicCanvasLayoutProvider;

@interface IESLiveLinkmicCanvasViewManager : NSObject <IESLiveLinkmicSessionViewProvider, IESLiveLinkmicCanvasManager>

@property (retain, nonatomic) IESLiveLinkmicCanvasView *canvasView;
@property (retain, nonatomic) IESLiveLinkmicCanvasViewModel *canvasViewModel;
@property (retain, nonatomic) NSMapTable *linkMicIDToRTCView;
@property (retain, nonatomic) UIView *cameraPreview;
@property (nonatomic) BOOL cameraPreviewIsInAnimation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraPreviewOriginFrame;
@property (weak, nonatomic) id<IESLiveLinkmicCanvasViewManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveLinkmicCanvasLayoutProvider> layoutProvider;

- (void)didSetAttachingDIContext;
- (id)sessionViewWithLinkmicId:(id)a0;
- (void)insertRTCSessionView:(id)a0 linkmicID:(id)a1;
- (BOOL)hasRTCSessionViewWithLinkmicID:(id)a0;
- (void)setCameraCornerHidden:(BOOL)a0;
- (void)updateCameraPreview;
- (void)resetCameraPreview;
- (void)updateSessionViews;
- (id)cameraEffectProvider;
- (void)addCameraPreviewIfNeeded;
- (void)updateWithLayoutProvider:(id)a0;
- (id)currentCanvasWithLayoutProvider:(id)a0;
- (void)bindRTCSessionViewWithLinkmicID:(id)a0 toUser:(id)a1;
- (void)insertLinkMicUser:(id)a0;
- (BOOL)onRecievedSEIResult:(id)a0;
- (void).cxx_destruct;
- (id)currentCanvas;
- (void)clean;
- (void)clearCanvas;

@end
