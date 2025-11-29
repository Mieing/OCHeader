@class NSString, UIViewController;

@interface IESLiveResouceBundleSwitchButton : UIButton

@property (retain, nonatomic) NSString *category;
@property (copy, nonatomic) id /* block */ bundleDidSwiched;
@property (weak, nonatomic) UIViewController *sourceViewController;

- (void)showSwitchButtonClicked;
- (void)dragMoving:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0;

@end
