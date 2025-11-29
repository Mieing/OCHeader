@class UIView, NSString, IESLivePresentTicketView, IESLivePresentTicketFromPersonInfoView, UIImageView, UIButton, IESLivePaywallShareTicketAPI, PaidLiveTicketDataResponse_PaidLiveTicketDataData, PaidLiveViewRightResponse_PaidLiveViewRightData, UILabel;

@interface IESLiveGetPresentTicketViewController : UIViewController

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLivePaywallShareTicketAPI *api;
@property (retain, nonatomic) IESLivePresentTicketView *ticketView;
@property (retain, nonatomic) IESLivePresentTicketFromPersonInfoView *ticketFromPersonInfoView;
@property (retain, nonatomic) UIButton *saveTicketImageButton;
@property (retain, nonatomic) UIButton *introductionButton;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIButton *refundTicketButton;
@property (retain, nonatomic) PaidLiveTicketDataResponse_PaidLiveTicketDataData *ticketInfoData;
@property (retain, nonatomic) PaidLiveViewRightResponse_PaidLiveViewRightData *viewRightData;
@property (copy, nonatomic) NSString *shareTicketType;
@property (nonatomic) BOOL hasGotTicket;
@property (nonatomic) BOOL hasRefundedTicket;
@property (copy, nonatomic) NSString *ticketID;
@property (copy, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *fromUserSecID;
@property (copy, nonatomic) NSString *roomStatus;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *ticketStatus;

- (void)trackPageShow;
- (void)backClick;
- (void)setupNormalUI;
- (void)avatarClick;
- (void)p_tansformScaleIfNeeded;
- (void)loadNormalInfo;
- (id)commonParametersWithEntriesFromDictionary:(id)a0;
- (void)fetchQRCodeForURLString:(id)a0;
- (void)loadUIForHasGotTicket;
- (void)loadUIForGetTicket;
- (void)getTicketClick;
- (void)saveShareTicketImageClick;
- (void)introductionClick;
- (void)refundTicketClick;
- (id)attributedStringForIntroductionNeedsArrow:(BOOL)a0;
- (void)trackGetTicketSuccess;
- (void)trackGetTicketFailureWithReason:(id)a0;
- (void)trackGetTicketClick;
- (void)trackRefundTicketAlertClickForSubmit:(BOOL)a0;
- (void)trackRefundTicketClick;
- (void)trackRefundTicketAlert;
- (void)trackIntroduction;
- (id)renderTicketImage;
- (void)trackSaveShareTicketImageClick;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setup;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
