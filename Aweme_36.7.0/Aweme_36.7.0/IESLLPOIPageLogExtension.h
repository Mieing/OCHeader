@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIPageLogExtension : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (id)getParams;
- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void).cxx_destruct;
- (void)dealloc;

@end
