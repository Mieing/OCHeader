@class NSString, NSMutableSet, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoBTMExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) BOOL isRegistered;
@property (nonatomic) BOOL isAllowedBodyExposure;
@property (retain, nonatomic) NSMutableSet *tagSet;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLoadPageModel:(id)a0;
- (void)componentViewWillShow:(id)a0;
- (void)initializeExtension;
- (void)allVisibleComponentsWillShow;
- (void)sendLogWithTag:(id)a0;
- (void).cxx_destruct;

@end
