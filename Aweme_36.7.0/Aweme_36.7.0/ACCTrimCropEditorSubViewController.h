@class UIViewController, NSString, ACCTrimCropInputData, IESContainer, UIView, ACCTrimCropComponentManager, ACCTrimCropEditorToolView;

@interface ACCTrimCropEditorSubViewController : UIViewController <ACCTrimCropEditorController>

@property (retain, nonatomic) UIView *previewBGContainerView;
@property (retain, nonatomic) ACCTrimCropInputData *inputData;
@property (retain, nonatomic) IESContainer *context;
@property (retain, nonatomic) ACCTrimCropComponentManager *componentManager;
@property (retain, nonatomic) ACCTrimCropEditorToolView *toolView;
@property (retain, nonatomic) UIView *mediaContainerView;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) UIView *previewContainerView;
@property (readonly, nonatomic) UIView *playControlContainerView;
@property (readonly, nonatomic) UIView *operationContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToolBar;
- (void)configPageServiceContainer:(id)a0;
- (void)hiddenToolBar;
- (void)addToolBarWithItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updatePreviewContainerViewFrameWithAspectRatio:(double)a0;
- (double)mediaContainerViewHeight;
- (double)previewBGContainerViewY;
- (double)previewBGContainerViewHeight;
- (void)setupContainerView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willTransitionIn;

@end
