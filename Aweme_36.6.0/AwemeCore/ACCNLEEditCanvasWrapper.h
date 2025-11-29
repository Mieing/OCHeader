@class NLEInterface_OC, NSString, AWEVideoPublishViewModel, UIView;
@protocol ACCMediaContainerViewProtocol;

@interface ACCNLEEditCanvasWrapper : NSObject <ACCEditBuildListener, ACCEditCanvasProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) UIView<ACCMediaContainerViewProtocol> *mediaContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setupPublishViewModel:(id)a0;
- (void)setupMediaContainerView:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)updateCanvasContent;
- (void)setUpCanvas;
- (void)updateWithVideoInfo:(id)a0 source:(id)a1;
- (void)updateWithVideoInfo:(id)a0 source:(id)a1 style:(id)a2 slotTag:(id)a3 completion:(id /* block */)a4;
- (void)updateWithVideoInfo:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (id)createColorCanvasConfig;
- (void)applyCanvasColorWithConfigUsingSlot:(id)a0 completion:(id /* block */)a1;
- (id)currentApplyCanvasColorConfig;
- (void).cxx_destruct;
- (id)init;

@end
