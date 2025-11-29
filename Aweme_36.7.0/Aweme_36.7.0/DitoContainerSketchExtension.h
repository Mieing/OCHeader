@class DitoContainerPageContext, DitoContainerSketchView, NSString;
@protocol DitoExtensionContainerProtocol;

@interface DitoContainerSketchExtension : NSObject <DitoContainerSketchViewDelegateProtocol, DitoExtensionProtocol>

@property (retain, nonatomic) DitoContainerSketchView *sketchView;
@property (nonatomic) BOOL shouldHideSketchLoadingView;
@property (nonatomic) BOOL shouldHideSketchErrorView;
@property (nonatomic) BOOL shouldHideSketchNavigationView;
@property (weak, nonatomic) DitoContainerPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)didEndReload;
- (void)initializeExtension;
- (void)showSketchView;
- (void)hideSketchView;
- (void)didTapBackButtonInSketchView:(id)a0;
- (void)didTapActionButtonInSketchView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
