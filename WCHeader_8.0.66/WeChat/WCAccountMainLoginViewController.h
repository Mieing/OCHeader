@class UIButton, NSMutableArray, NSString, WCAccountLoginMainPageView, MMUIButton, MMUILabel;
@protocol WCAccountMainLoginViewControllerDelegate;

@interface WCAccountMainLoginViewController : WCAccountBaseViewController <WCAccountSignMethodSwitchViewControllerDelegate> {
    id<WCAccountMainLoginViewControllerDelegate> _delegate;
}

@property (nonatomic) unsigned long long signMethod;
@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) WCAccountLoginMainPageView *mainPageView;
@property (retain, nonatomic) MMUIButton *changePageButton;
@property (retain, nonatomic) MMUILabel *privacyLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UIButton *bothDeviceButton;
@property (retain, nonatomic) NSMutableArray *moreButtonTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)setupWithData:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (BOOL)autoHandleKeyboardEvent;
- (BOOL)useSheetView;
- (BOOL)useRedesignStyle;
- (void)initView;
- (id)titleForNextButton;
- (id)titleForChangePageButton;
- (id)privacy;
- (void)onNext;
- (void)onBothDeviceClicked;
- (void)onSwitch;
- (void)showOtherMethodPageSheet;
- (void)switchToUserLogin;
- (void)switchToPhoneLogin;
- (void)userDidClickBack;
- (void)userDidClickMore;
- (unsigned long long)getSignMethod;
- (void)onSignMethodSwitch:(unsigned long long)a0;
- (void).cxx_destruct;

@end
