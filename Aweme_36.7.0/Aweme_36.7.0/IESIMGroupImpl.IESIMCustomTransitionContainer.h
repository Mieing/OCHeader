@interface IESIMGroupImpl.IESIMCustomTransitionContainer : UIViewController <IESIMCustomModalTransitionVCProtocol, AWEIMInAppPushProtocol> {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ enablePull;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)canShowInnerPush;
- (BOOL)enablePullDismissGestureForPresentation;
- (id)pullIndicatorViewBackgroundColor;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
