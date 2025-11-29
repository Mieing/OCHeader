@class UIView, NSString, NSArray, AWESlidingViewController, UIButton, CAGradientLayer, NSMutableSet, UIScrollView;
@protocol AWEMultiTabActivitySegmentDelegate;

@interface AWEMultiTabActivitySegmentControl : UIView <UIScrollViewDelegate, AWESlidingTabbarProtocol>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *walletButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bottomLine;
@property (copy, nonatomic) NSArray *segArray;
@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) NSString *selectedSegID;
@property (retain, nonatomic) CAGradientLayer *leftMaskLayer;
@property (retain, nonatomic) CAGradientLayer *rightMaskLayer;
@property (retain, nonatomic) CAGradientLayer *leftAndRightMaskLayer;
@property (retain, nonatomic) NSMutableSet *showedActivities;
@property (weak, nonatomic) id<AWEMultiTabActivitySegmentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;

- (struct CGPoint { double x0; double x1; })transformScaleWithButton:(id)a0;
- (void)updateIrregularTextFrameWhenScroll:(id)a0 animated:(BOOL)a1;
- (void)scrollViewContentOffsetDidEndChanging;
- (void)slidingControllerDidScroll:(id)a0;
- (void)updateMaskLayer;
- (void)backButtonClick:(id)a0;
- (void)tabClicked:(id)a0;
- (void)rebuildScrollUI;
- (unsigned long long)rebuildButtons;
- (void)rebuildBottomLine;
- (void)walletButtonClick:(id)a0;
- (id)initWithSegArray:(id)a0 defaultSelectedSegID:(id)a1 delegate:(id)a2;
- (void)updateMaskLayerFrameAndShowIfNeeded;
- (void)refreshTabUI;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
