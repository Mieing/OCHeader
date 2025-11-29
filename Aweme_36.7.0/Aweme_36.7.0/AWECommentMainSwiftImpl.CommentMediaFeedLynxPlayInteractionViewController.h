@interface AWECommentMainSwiftImpl.CommentMediaFeedLynxPlayInteractionViewController : UIViewController <HunterContainerLifeCycleProtocol, AWECommentMediaFeedLynxPlayInteractionViewControllerProtocol> {
    void /* unknown type, empty encoding */ hunterContainer;
    void /* unknown type, empty encoding */ finalSchema;
    void /* unknown type, empty encoding */ finalClientData;
    void /* unknown type, empty encoding */ containerDidPageReady;
    void /* unknown type, empty encoding */ userName;
    void /* unknown type, empty encoding */ didFinishFirstLoad;
    void /* function */ userNameViewDidUpdateBlcok;
}

@property (nonatomic, copy) id /* block */ userNameViewDidUpdateBlcok;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)containerDidPageUpdate:(id)a0;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)containerInjectSchema:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
