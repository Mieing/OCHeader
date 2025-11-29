@class NSString, NSMutableSet, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoBTMExtension : NSObject <LLDitoExtensionProtocol>

@property (nonatomic) BOOL isRegistered;
@property (nonatomic) BOOL isAllowedBodyExposure;
@property (retain, nonatomic) NSMutableSet *tagSet;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)btm_autoManaged;
- (void)didLoadPageModel:(id)a0;
- (void)componentViewWillShow:(id)a0;
- (void)initializeExtension;
- (void)allVisibleComponentsWillShow;
- (void)sendLogWithTag:(id)a0;
- (void).cxx_destruct;

@end
