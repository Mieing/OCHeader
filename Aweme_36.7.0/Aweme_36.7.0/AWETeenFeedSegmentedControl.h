@class UIStackView, NSArray, NSString, AWESlidingViewController, UIView, UIGestureRecognizer;

@interface AWETeenFeedSegmentedControl : UIView <UIGestureRecognizerDelegate, AWESlidingTabbarProtocol>

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIView *underscoreView;
@property (weak, nonatomic) UIGestureRecognizer *singleTap;
@property (weak, nonatomic) UIGestureRecognizer *doubleTap;
@property (nonatomic) BOOL isTapped;
@property (copy, nonatomic) id /* block */ indexChangeBlock;
@property (copy, nonatomic) id /* block */ indexRepeatedClickBlock;
@property (copy, nonatomic) id /* block */ doubleClickedBlock;
@property (copy, nonatomic) id /* block */ singTapClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;

- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1 tapped:(BOOL)a2;
- (void)slidingControllerDidScroll:(id)a0 isFigureDragging:(BOOL)a1;
- (id)initWithItems:(id)a0 defaultSelectedIndex:(long long)a1;
- (void)updateColor:(id)a0 isDark:(BOOL)a1;
- (void)channelSwitchTurnOn:(BOOL)a0 isDark:(BOOL)a1;
- (void)shouldShowYellowDot:(BOOL)a0 index:(long long)a1;
- (void)showChannelSwitch;
- (BOOL)isShowYellowDotAtIndex:(long long)a0;
- (void)p_buildUIWithItems:(id)a0;
- (void)p_setupRecognizer;
- (void)p_singleTap:(id)a0;
- (void)p_doubleTap:(id)a0;
- (double)p_underscoreViewCenterY;
- (void)p_tabChanged:(id)a0 index:(long long)a1 toSelected:(BOOL)a2 animated:(BOOL)a3;
- (void)p_segmentedControlTapped:(long long)a0;
- (void)p_repeatTapIndex:(long long)a0;
- (void)updateTitle:(id)a0 AtIndex:(long long)a1;
- (void)hideChannelSwitch;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)updateItems:(id)a0;

@end
