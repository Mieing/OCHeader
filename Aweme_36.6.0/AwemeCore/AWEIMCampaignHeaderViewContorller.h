@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEUGActivityNoticeTitleViewProtocol;

@interface AWEIMCampaignHeaderViewContorller : UIViewController <AWEUGCampaignNoticeHeaderProtocol>

@property (retain, nonatomic) UILabel *releaseTip;
@property (retain, nonatomic) UIButton *campaignBtn;
@property (nonatomic) double lastOffset;
@property (nonatomic) BOOL hasPresentedHint;
@property (nonatomic) BOOL hasPresentedVibrate;
@property (retain, nonatomic) UIButton *backButton;
@property (nonatomic) double dropDownThresholdPad_12;
@property (nonatomic) double dropDownThresholdPad_27;
@property (nonatomic) double dropDownThresholdPad_45;
@property (retain, nonatomic) UIView<AWEUGActivityNoticeTitleViewProtocol> *titleView;
@property (nonatomic) BOOL hasPullAnimation;
@property (retain, nonatomic) UIImageView *lableImageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *fakeNaviImageView;
@property (copy, nonatomic) id /* block */ campaignBtnClick;
@property (copy, nonatomic) id /* block */ campaignStateDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (id)imageWithView:(id)a0;
- (void)bindNavigationbar:(id)a0;
- (double)campaignHeaderOffsetRadio;
- (void)updateWithOffset:(double)a0 isAuto:(BOOL)a1;
- (void)updateWithOffset:(double)a0;
- (double)campaignHeaderDropDownHeightThreshold;
- (double)campaignGuideHeightWithAnimation;
- (void)showCampaignButton:(BOOL)a0;
- (void)prepareForScrollDownAutomatically;
- (void)animateScrollDownAutomatically;
- (void)resetToInit;
- (void)onCampginEnableChangeNotification:(id)a0;
- (void)updatePadBackgroundImageViewWithOffset:(double)a0;
- (void)updatePadLableImageViewCenterWithOffset:(double)a0;
- (void)updateBackgroundImageViewWithOffset:(double)a0;
- (void)updateLableImageViewCenterWithOffset:(double)a0;
- (void)updateTipsWithOffset:(double)a0;
- (void)padPrepareForScrollDownAutomatically;
- (void)padAnimateScrollDownAutomatically;
- (void)campaignBtnClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
