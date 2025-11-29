@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLGDParamsValidatorExtension : NSObject <LLDitoExtensionProtocol, LLCubeViewDelegate, LLDitoLynxExtensionDelegateProtocol, LLDitoHalfContainerDelegateProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
