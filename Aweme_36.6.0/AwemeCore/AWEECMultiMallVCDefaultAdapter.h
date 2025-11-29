@class NSString;
@protocol AWEECMultiMallViewControllerContext;

@interface AWEECMultiMallVCDefaultAdapter : NSObject <AWEUserMessage, AWEECMultiMallViewControllerAdapter>

@property (weak, nonatomic) id<AWEECMultiMallViewControllerContext> context;
@property (nonatomic) BOOL needForceLandShoppingAfterLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)startSetupUI;
- (void)finishSetupUI;
- (BOOL)shouldSlidingVCBeginDragging;
- (BOOL)shouldCategoryInteractive;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
