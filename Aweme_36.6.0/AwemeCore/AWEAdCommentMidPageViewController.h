@interface AWEAdCommentMidPageViewController : AWEAdCommentBaseViewController <AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ insertGroupID;
    void /* unknown type, empty encoding */ insertCommentID;
    void /* unknown type, empty encoding */ itemID;
    void /* unknown type, empty encoding */ showFeedbackIcon;
    void /* unknown type, empty encoding */ baseFeedBackURL;
}

- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
