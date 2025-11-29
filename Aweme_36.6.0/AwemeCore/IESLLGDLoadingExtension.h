@class IESLLPOILoadingView, LLDitoPageContext, NSString;
@protocol LLDitoExtensionContainerProtocol;

@interface IESLLGDLoadingExtension : NSObject <LLDitoExtensionProtocol, LLCubeViewDelegate>

@property (nonatomic) BOOL isEndRequest;
@property (weak, nonatomic) IESLLPOILoadingView *loadingView;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLoadingView;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)initializeExtension;
- (BOOL)isBodyStartLoad;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didLayout;
- (void)addLoadingView;

@end
