@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoRefreshNodeExtension : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (void)refreshNodeWithNodeTag:(id)a0 nodeData:(id)a1;
- (void).cxx_destruct;

@end
