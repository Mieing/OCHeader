@class AWEAwemeModel, NSString, AWEButton, UIImageView, AFDModalViewHelper, UIButton, UILabel, AWEProfileToggleView;

@interface AFDViewerRecordGuideViewController : UIViewController <AWEPanelTransitionWithBackground, AFDViewerRecordGuideViewControllerProtocol>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEButton *knownButton;
@property (retain, nonatomic) AWEButton *actionButton;
@property (retain, nonatomic) AWEProfileToggleView *viewerRecordAuthorizationView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL viewerRecordAuthorizationToggleIsOn;
@property (nonatomic) BOOL shouldUpdateBarrageAfterDismiss;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long popupID;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionBackgroundViewTapped:(id)a0;
- (id)initWithUserID:(id)a0 referString:(id)a1;
- (void)refreshLockImage:(BOOL)a0;
- (id)initWithAweme:(id)a0 shouldUpdateBarrageAfterDismiss:(BOOL)a1 referString:(id)a2;
- (double)p_hintLabelHeight;
- (void)initHelper;
- (void)clickCloseButtonDismiss;
- (id)p_hintLabelText;
- (id)p_hintLabelStyle;
- (id)p_hintLabelFont;
- (void)clickKnownButtonDismiss;
- (void)clickActionButtonDismiss;
- (void)p_switchVideoStoreViewStatus;
- (void)dismissWithMethod:(id)a0;
- (void)p_trackCardDismissWithMethod:(id)a0;
- (void)p_trackCardImpression;
- (void)p_trackToggleSwitch:(BOOL)a0;
- (id)p_getEnterMethod;
- (void)presentOnViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
