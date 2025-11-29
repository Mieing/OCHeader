@interface AWEPaySwiftImpl.FKMLynxContainerView : UIView <CJPayLynxViewDelegate> {
    void /* unknown type, empty encoding */ lynxView;
    void /* unknown type, empty encoding */ contentID;
    void /* unknown type, empty encoding */ suggestedSize;
    void /* unknown type, empty encoding */ loadConfig;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ hasDisplayed;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)viewDidFinishLoadWithError:(id)a0;
- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
