@class AFDCloseFriendsSpecificationItemView, AFDModalViewHelper, NSString, UILabel, UIView;

@interface AFDCloseFriendsSpecificationPanelViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double descHeight;
@property (retain, nonatomic) AFDCloseFriendsSpecificationItemView *firstItemView;
@property (retain, nonatomic) AFDCloseFriendsSpecificationItemView *secondItemView;
@property (retain, nonatomic) AFDCloseFriendsSpecificationItemView *thirdItemView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (double)contentHeight;
- (void).cxx_destruct;
- (id)init;
- (double)contentWidth;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)show;
- (void)setupUI;

@end
