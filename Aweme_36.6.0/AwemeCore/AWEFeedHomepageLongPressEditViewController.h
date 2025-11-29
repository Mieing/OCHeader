@class UIView, NSString, DUXBaseLabel, UITapGestureRecognizer, AWEFeedHomepageLongPressEditViewControllerConfig, UIImageView, UITableView, UIPanGestureRecognizer, DUXButton, AWEFeedHomepageLongPressPanelItem, AWEFeedHomepageLongPressEditSwitchView;
@protocol AWEFeedHomepageLongPressEditViewControllerDelegate;

@interface AWEFeedHomepageLongPressEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UITableView *selectView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) AWEFeedHomepageLongPressEditSwitchView *switchView;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panelPanGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastPoint;
@property (nonatomic) double panelHeight;
@property (nonatomic) BOOL isDismiss;
@property (retain, nonatomic) UITapGestureRecognizer *closeGesture;
@property (nonatomic) BOOL hasShowSwitch;
@property (retain, nonatomic) AWEFeedHomepageLongPressPanelItem *currentSelectedItem;
@property (retain, nonatomic) AWEFeedHomepageLongPressEditViewControllerConfig *config;
@property (weak, nonatomic) id<AWEFeedHomepageLongPressEditViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnVC:(id)a0;
- (void)clickCloseButton;
- (double)currentPanelHeight;
- (void)setupStyleA;
- (void)setupStyleB;
- (double)getSelectViewHeight;
- (BOOL)shouldShowSwitch;
- (void)addSwitchView;
- (double)itemHeight:(id)a0;
- (void)showSwitchViewWithAnimation;
- (void)hideSwitchViewWithAnimation;
- (void)handleCloseGesture:(id)a0;
- (void)updatePanelThemeStyle:(long long)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (double)headerHeight;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
