@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIDetailSkinExtension : NSObject <DitoExtensionProtocol>

@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (id)generalContext;
- (void)loadFontsIfNeeded;
- (id)fontsToRegisterWithPOIID:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
