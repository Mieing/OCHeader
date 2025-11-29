@class NSString, MMUIViewController, WebSearchUseCase, WebSearchContext;
@protocol WSWebViewPluginableProtocol, WebSearchHomePage;

@interface WebSearchHomePagePresenter : NSObject <WSInputProviderDelegate>

@property (weak, nonatomic) MMUIViewController<WebSearchHomePage, WSWebViewPluginableProtocol> *homePage;
@property (retain, nonatomic) WebSearchUseCase *searchUseCase;
@property (retain, nonatomic) WebSearchContext *originalContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHomePage:(id)a0;
- (void)goSearchPageWithModBlock:(id /* block */)a0;
- (void)onTapSearchBox;
- (void)registerDoSearchOperation;
- (void)onGetTextInput:(id)a0 isFromVoice:(BOOL)a1;
- (void).cxx_destruct;

@end
