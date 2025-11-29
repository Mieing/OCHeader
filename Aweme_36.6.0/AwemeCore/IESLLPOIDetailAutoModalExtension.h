@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIDetailAutoModalExtension : NSObject <LLDitoExtensionProtocol>

@property (nonatomic) BOOL showAutoOpenService;
@property (nonatomic) BOOL showIronManModalView;
@property (nonatomic) double ironManModalViewStartTime;
@property (nonatomic) BOOL shouldTrackIronManModalViewStayTime;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (id)poiDetail;
- (void)didLoadPageModel:(id)a0;
- (void)initializeExtension;
- (id)constData;
- (id)generalContext;
- (void)handleIronManExitNotification;
- (void)p_showIronManModalViewWithUrl:(id)a0;
- (void)p_showAutoOpenServiceModalView;
- (void)p_mergePublishParams:(id)a0 toDict:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
