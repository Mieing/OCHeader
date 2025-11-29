@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEGDAppearanceExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) BOOL reqSuccess;
@property (nonatomic) BOOL hasTraceOpenPageEvent;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)closeParams;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)sendPageOpenEvent;
- (void)sendPageShowEvent;
- (void)sendPageHideEvent;
- (void)sendPageCloseEvent;
- (void)sendPageEvent:(id)a0 extraParams:(id)a1;
- (id)requestStateParams;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear;

@end
