@class NSString, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, AEKMegaEditor, ACCAdvanceEditStickerServiceProtocol, DVEEditingRuntimeProtocol, ACCAEFullPreviewViewContainer, ACCAEGlobalStickerServiceProtocol;

@interface ACCAEFullPreviewViewController : ACCViewController <DVEPreviewZoomTransitionInnerContextProvider, DVEPreviewZoomTransitionGestureProtocol>

@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCAEFullPreviewViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCAdvanceEditStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCAEGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionEndView;
- (id)initWithBusinessConfiguration:(id)a0;
- (void)willTransitionIn:(id /* block */)a0;
- (long long)mediaBigMediaContentMode;
- (void)prepareForLoadComponent;
- (void)didTransitionOut:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomTransitionEndViewFrame;
- (id)zoomTransitionFromEndViewSnapView;
- (id)previewTransitionBottomView;
- (BOOL)allowTransitionPanGestureStart:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
