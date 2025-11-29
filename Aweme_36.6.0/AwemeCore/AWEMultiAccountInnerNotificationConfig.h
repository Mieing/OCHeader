@interface AWEMultiAccountInnerNotificationConfig : DUXInAppNotificationConfig

@property (copy, nonatomic) id /* block */ viewWillAppearBlock;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;
@property (copy, nonatomic) id /* block */ viewWillDisAppearBlock;
@property (copy, nonatomic) id /* block */ viewDidDisAppearBlock;
@property (copy, nonatomic) id /* block */ viewDidTapBlock;
@property (nonatomic) BOOL disablePullIndicatorView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interactiveComponentFrame;
- (void).cxx_destruct;
- (double)maxLabelWidth;

@end
