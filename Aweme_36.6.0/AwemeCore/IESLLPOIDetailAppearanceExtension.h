@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIDetailAppearanceExtension : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear;

@end
