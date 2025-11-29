@class NSString, UIImageView, UILabel, UIView, UITableView;

@interface AWESwipeUpGuideScreenBounceViewController : UIViewController <AWESwipeUpGuideViewControllerProtocol>

@property (retain, nonatomic) UIView *feedScreenBounceMaskView;
@property (nonatomic) long long screenBounceAnimationTimes;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) struct CGPoint { double x; double y; } originOffSet;
@property (retain, nonatomic) UILabel *slideUpDownHintLabel;
@property (retain, nonatomic) UIImageView *handImageView;
@property (nonatomic) BOOL enableGuideEnhance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSwipeUpGuideOnTableView:(id)a0;
- (void)dismissSwipeUpGuideManager;
- (void)bindGesture;
- (void)beginScreenBounceGuideAnimation;
- (id)slideUpDownHintLabelText;
- (void)repeatScreenBounceGuideAnimationIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
