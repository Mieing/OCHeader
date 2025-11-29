@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoScreenshotExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleScreenshot:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear;

@end
