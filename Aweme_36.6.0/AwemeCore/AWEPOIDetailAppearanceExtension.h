@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailAppearanceExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
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
