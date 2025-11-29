@class NSString, LLDitoPageContext, LLCubeView;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLGDErrorViewExtension : NSObject <LLDitoExtensionProtocol, LLCubeViewDelegate>

@property (weak, nonatomic) LLCubeView *errorView;
@property (nonatomic) int retry;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)loadErrorType:(long long)a0 error:(id)a1;
- (void)addErrorViewWithParams:(id)a0;
- (BOOL)isBodyStartLoad;
- (id)lynxContainerViewWithErrorDict:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)didLayout;
- (void)removeErrorView;

@end
