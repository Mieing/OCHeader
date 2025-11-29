@class UIViewController, AWEIMEnterpriseModeGuideConfig;

@interface AWEIMMessageTabEnterpriseSwitchModePopupViewModel : NSObject

@property (weak, nonatomic) UIViewController *viewControllerForPresentation;
@property (retain, nonatomic) AWEIMEnterpriseModeGuideConfig *guideConfig;
@property (copy, nonatomic) id /* block */ rogerPopupBlock;
@property (copy, nonatomic) id /* block */ dismissPopupBlock;

- (void).cxx_destruct;

@end
