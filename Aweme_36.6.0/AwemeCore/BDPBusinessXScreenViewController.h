@class NSArray, NSString, UIView, BDPUniqueID;
@protocol BDPToolBarViewProtocol;

@interface BDPBusinessXScreenViewController : BDPXScreenViewController <BDPContainerLifeCycleMessage, BDPXScreenConfigDelegate, BDPXScreenStatusChangeDelegate>

@property (nonatomic) BOOL isGestureShouldBegin;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ customButtonAction;
@property (copy, nonatomic) id /* block */ customButtonActionClose;
@property (retain, nonatomic) UIView *businessCustomButtonView;
@property (retain, nonatomic) NSArray *businessCustomButtonList;
@property (retain, nonatomic) UIView *businessCustomSeperatorLayer;
@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) UIView *customRightButton;
@property (retain, nonatomic) UIView *originCustomRightView;
@property (retain, nonatomic) UIView<BDPToolBarViewProtocol> *xScreenToolbarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterWithUniqueID:(id)a0;
- (BOOL)XScreenWindowShouldShowCustomButton:(id)a0;
- (id)initWithUniqueID:(id)a0 padAdapter:(BOOL)a1;
- (BOOL)XScreenWindowCanBeDragUp:(id)a0;
- (BOOL)XScreenWindowCanBeDragDown:(id)a0;
- (BOOL)XScreenWindow:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (unsigned long long)XScreenWindowChangeToSizeModeWhenShowFirstly:(id)a0 isSecondPage:(BOOL)a1;
- (void)XScreenWindow:(id)a0 didChangeToSizeMode:(unsigned long long)a1;
- (void)XScreenWindow:(id)a0 translateToValue:(double)a1 contentHeight:(double)a2 contentHeightRate:(double)a3 adjustContent:(BOOL)a4;
- (BOOL)handleForceHalfToFullScreen;
- (double)XScreenWindowContentHeightRate:(id)a0;
- (BOOL)useNewXScreenGestureOpt;
- (void)setupXScreenPanGestureRecognizer;
- (void)updateXScreenViewsV2;
- (void)updateXScreenViews;
- (void)postEnterFullScreenNotification;
- (void)postEnterSmallScreenNotification;
- (id)getLaunchParam;
- (BOOL)canShowFeedBackButton;
- (void)setupXScreenToolbarView;
- (void)restoreXScreenToolbarView;
- (void)XScreenWindowCustomButtonAction;
- (void)XScreenWindowCustomButtonActionClose;
- (id)getCurrentWindowBackgroundShadowView;
- (id)createXScreenToolbarView;
- (void)adjustSizeToValue:(long long)a0 adjustContent:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)adjustSizeToFullScreenAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)canShowFeedBackButtonByMeta;
- (BOOL)canShowFeedBackButtonBySettings;
- (void)XScreenWindowWillClose:(id)a0;
- (void)XScreenWindowClose:(id)a0;
- (void)XScreenWindowCustomButton:(id)a0 buttonList:(id)a1 seperatorLayer:(id)a2 viewController:(id)a3;
- (BOOL)XScreenWindowCloseTouchOutside:(id)a0;
- (BOOL)XScreenWindow:(id)a0 recognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (double)XScreenWindowCornerRadius:(id)a0;
- (unsigned long long)XScreenWindowChangeToSizeModeWhenShowAgain:(id)a0;
- (void)XScreenWindowUpdateResize:(id)a0;
- (void)XScreenWindow:(id)a0 willChangeToSizeMode:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithUniqueID:(id)a0;

@end
