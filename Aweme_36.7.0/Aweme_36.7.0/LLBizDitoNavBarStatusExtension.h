@class NSString, NSMutableSet, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLBizDitoNavBarStatusExtension : NSObject <LLDitoExtensionProtocol>

@property (retain, nonatomic) NSMutableSet *nodeTagSet;
@property (retain, nonatomic) NSMutableSet *callbackSet;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveNaviBarStatusDidChange:(id)a0;
- (void)didReceiveOpenKeepInSyncWithNaviBarStatus:(id)a0;
- (void)tryInvokeAllCallbackWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
