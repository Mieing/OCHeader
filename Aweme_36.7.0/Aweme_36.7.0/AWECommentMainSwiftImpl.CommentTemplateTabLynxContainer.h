@interface AWECommentMainSwiftImpl.CommentTemplateTabLynxContainer : UIViewController <HunterContainerLifeCycleProtocol, AWECommentTabComponentLifeCycleProtocol> {
    void /* unknown type, empty encoding */ pageID;
    void /* unknown type, empty encoding */ loadingError;
    void /* unknown type, empty encoding */ uiDuration;
    void /* unknown type, empty encoding */ uiBegin;
    void /* unknown type, empty encoding */ firstFetchResponse;
    void /* unknown type, empty encoding */ firstFetchError;
    void /* unknown type, empty encoding */ pageDidReady;
    void /* unknown type, empty encoding */ hunterContainer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentSrollView;
    void /* unknown type, empty encoding */ scrollViewDidUpdate;
    void /* unknown type, empty encoding */ didPreload;
    void /* unknown type, empty encoding */ schema;
    void /* unknown type, empty encoding */ finalSchema;
    void /* unknown type, empty encoding */ tempModel;
    void /* unknown type, empty encoding */ didRegisterEventCallBack;
}

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)containerDidPageUpdate:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)commentPanelDidDismiss;
- (void)tabDidSelected:(unsigned long long)a0 from:(unsigned long long)a1 method:(unsigned long long)a2;
- (void)onCommentUIThemeChange:(BOOL)a0;
- (void)tabWillAppear;
- (void)commentPanelDidShow;
- (void)willDisplayPanelHeightChangeTransition:(double)a0 isFullScreen:(BOOL)a1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
