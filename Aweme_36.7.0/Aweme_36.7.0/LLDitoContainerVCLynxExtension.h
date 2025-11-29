@class LLDitoContainerPageContext, NSString;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoContainerVCLynxExtension : NSObject <LLDitoGeneralLynxContainerBusinessExtender, LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoContainerPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)setupCubeModel:(id)a0;
- (id)extraParamsWithCubeModel:(id)a0 withContext:(id)a1;
- (void)bindBDXEvent:(id)a0;
- (long long)threadStrategyFromNode:(id)a0;
- (void).cxx_destruct;

@end
