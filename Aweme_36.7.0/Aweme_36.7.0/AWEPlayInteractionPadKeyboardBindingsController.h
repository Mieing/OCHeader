@class NSObject;
@protocol AWEPlayInteractionFavoriteElementViewModelProtocol;

@interface AWEPlayInteractionPadKeyboardBindingsController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) NSObject<AWEPlayInteractionFavoriteElementViewModelProtocol> *favoriteViewModel;
@property (nonatomic) BOOL isAppear;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)trackCommonParams;
- (void)registerKeyboardBindings;
- (void)trackKeyEvent:(id)a0 key:(id)a1 clickType:(id)a2;
- (BOOL)isPlayerOnScreen;
- (void)setupFavoriteStatus;
- (void)onSpaceKeyDown;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
