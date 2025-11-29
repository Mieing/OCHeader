@class DVEVCContext, NSString, ACCAdvanceEditBottomComponentModelFactory;
@protocol ACCAdvanceEditViewModelProtocol, DVEComponentViewManagerProtocol;

@interface ACCAdvanceEditBottomMenuViewController : UIViewController <DVECoreActionDelegate>

@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (retain, nonatomic) ACCAdvanceEditBottomComponentModelFactory *bottomMenuFactory;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserve;
- (BOOL)p_shouldRefreshCurrentBarGroupTypeForState:(unsigned long long)a0;
- (void)p_showComponentType:(long long)a0 withIsReshoot:(BOOL)a1 isSingle:(BOOL)a2;
- (void)nleEditorDidChange;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
