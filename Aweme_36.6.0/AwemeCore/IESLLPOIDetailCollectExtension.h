@class LLDitoAction, LLDitoPageContext, NSString;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLPOIDetailCollectExtension : NSObject <LLDitoExtensionProtocol>

@property (nonatomic) BOOL isRequestComponent;
@property (nonatomic) BOOL isShowFollow;
@property (retain, nonatomic) LLDitoAction *requestAction;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindActionAndState;
- (void)initializeExtension;
- (id)constData;
- (id)detailPageContext;
- (void)requestDitoForCollectWithCollectCount;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;

@end
