@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoPerformanceChainExtension : NSObject <LLDitoExtensionProtocol, LLDitoViewControllerLifeCycleProtocol, LLDitoViewControllerLifeCycleProtocol_Private, LLDitoComponentDelegateProtocol_Private>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)didSendRequest;
- (void)viewDealloc;
- (void)didLoadPageModel:(id)a0;
- (void)didEndReload;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)didMergePageModel:(id)a0 update:(id)a1 result:(id)a2;
- (void)componentViewWillShow:(id)a0;
- (void)componentViewDidCompleteShow:(id)a0;
- (void)componentViewWillCreatedOfTag:(id)a0;
- (void)componentViewDidCreatedOfTag:(id)a0 componentView:(id)a1;
- (void)componentView:(id)a0 willUpdateViewModel:(id)a1;
- (void)componentView:(id)a0 didUpdateViewModel:(id)a1;
- (void)initializeExtension;
- (void)_componentViewModelWillCreatedWithNode:(id)a0;
- (void)_componentViewModelDidCreatedWithNode:(id)a0;
- (void).cxx_destruct;

@end
