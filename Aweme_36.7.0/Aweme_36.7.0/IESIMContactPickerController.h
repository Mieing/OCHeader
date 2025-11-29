@class NSString, AWEIMHalfScreenContainerViewController, IESIMContactPickerViewController, IESIMContactPickerContext;
@protocol IESIMContactPickerTemplateProtocol, IESIMContactPickerControllerDelegate;

@interface IESIMContactPickerController : NSObject <AWEIMHalfScreenContainerVCDelegate, IESIMContactPickerLayoutUpdateDelegate>

@property (retain, nonatomic) id<IESIMContactPickerTemplateProtocol> selectListTemplate;
@property (retain, nonatomic) IESIMContactPickerContext *context;
@property (weak, nonatomic) IESIMContactPickerViewController *selectListVC;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *halfScreenContainer;
@property (readonly, nonatomic) BOOL shouldEnsureImReady;
@property (weak, nonatomic) id<IESIMContactPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (double)externalAssignTopDragHeight;
- (double)dragHintViewTopMargin;
- (id)dragHintViewBackgroundColor;
- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)halfScreenContainerVCDidDismiss:(id)a0;
- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (void)halfScreenContainerVCWillDragToDismiss:(id)a0;
- (double)containerViewLayerCornerRadius;
- (id)showWithTopViewController:(id)a0 completion:(id /* block */)a1;
- (id)showWithTopViewController:(id)a0 bindHalfContainerDelegatePickVC:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (id)generateListViewControllerInstance;
- (void)showFullScreenWithTopViewController:(id)a0 completion:(id /* block */)a1;
- (void)dismissFullScreenWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePanelHeight;
- (id)__generateListViewControllerInstance;
- (void)p_presentViewController:(id)a0 onViewController:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)contactPickerViewController;
- (void)didTapCloseButton;

@end
