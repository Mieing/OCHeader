@class NSString, LLDitoVirtualRefreshPageTask, LLDitoPageContext, UIView;
@protocol LLDitoExtensionContainerProtocol, IESLLPlatformLoadingView, LLDitoVirtualRefreshPageInterceptor;

@interface LLDitoVirtualRefreshPageExtension : NSObject <LLDitoExtensionProtocol>

@property (retain, nonatomic) UIView<IESLLPlatformLoadingView> *loadingView;
@property (retain, nonatomic) LLDitoVirtualRefreshPageTask *task;
@property (nonatomic) BOOL didBindMainDataFlag;
@property (nonatomic) BOOL didPostLoadCompleteEvent;
@property (readonly, weak, nonatomic) id<LLDitoVirtualRefreshPageInterceptor> interceptor;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndReload;
- (void)didBindMainData;
- (void)initializeExtension;
- (void)virtualRefreshPageWithActionContext:(id)a0;
- (void)pageLoadFailureWithError:(id)a0;
- (void)trackWithCode:(long long)a0 msg:(id)a1 data:(id)a2;
- (void)tryShowLoadingView;
- (void)didRefreshPage;
- (void)removeTask;
- (void)tryHideLoadingView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancelTask;

@end
