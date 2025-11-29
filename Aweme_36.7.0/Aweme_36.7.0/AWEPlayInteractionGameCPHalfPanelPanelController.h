@class NSString;

@interface AWEPlayInteractionGameCPHalfPanelPanelController : AWEPlayInteractionNewBaseController <AWEPlayInteractionGameCPHalfPanelPanelControllerProtocol>

@property (copy, nonatomic) id /* block */ isPanelShowedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowed;
- (void)resizeVideoWhenDragPanel:(double)a0;
- (void)shrinkVideoWhenShowPanelWithAnimation:(BOOL)a0 targetHeight:(double)a1 animations:(id /* block */)a2 completion:(id /* block */)a3;
- (void)magnifyVideoWhenClosePanelWithAnimated:(BOOL)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
