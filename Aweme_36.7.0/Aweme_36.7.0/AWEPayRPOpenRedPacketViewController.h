@class AWEIMDouyinRedPacketDataManager, AWEPayRPOpenRedPacketCardConfigModel, AWEIMDouyinRedPacketInfoResponse, NSDictionary, AWEPayRPOpenRedPacketBaseCardView, AWEPaySpecialMediaView, UIView, NSString, AWEIMDouyinRedPacketTransferManager, AWEPayResourceConfig, AWEIMDouyinRedPacketModel, AWEIMDouyinRedPacketUserInfo, AWEIMDouyinRedPacketCoverModel, AWEIMDouyinRedPacketOpenResponse;
@protocol AWEIMMessageProtocol;

@interface AWEPayRPOpenRedPacketViewController : UIViewController <AWEPayRPDetailViewControllerDelegate, AWEPayDouyinRedPacketOpenTransitionOuterContextProvider>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEPayRPOpenRedPacketBaseCardView *openRedPackageCardView;
@property (retain, nonatomic) AWEPaySpecialMediaView *specialOpenView;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *infoResponse;
@property (retain, nonatomic) AWEIMDouyinRedPacketOpenResponse *openResponse;
@property (nonatomic) unsigned long long redPacketType;
@property (retain, nonatomic) id<AWEIMMessageProtocol> message;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketTransferManager *transferManager;
@property (nonatomic) long long rpStatus;
@property (retain, nonatomic) AWEPayRPOpenRedPacketCardConfigModel *cardConfig;
@property (retain, nonatomic) AWEPayResourceConfig *resourceConfig;
@property (copy, nonatomic) NSString *rpTitle;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL isInitiatedWithInfoResponse;
@property (nonatomic) BOOL shouldAuthVerifyAutoOpen;
@property (copy, nonatomic) id /* block */ animationCompletion;
@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSString *orderId;
@property (retain, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (nonatomic) BOOL needSpecialOpenStyle;
@property (copy, nonatomic) id /* block */ openCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_dismiss;
- (id)initWithRedpacketInfoResponse:(id)a0 message:(id)a1;
- (id)p_trackStatusWithInfo:(id)a0;
- (id)bottomCoverAnimationView;
- (id)topCoverAnimationView;
- (id)contentAnimationView;
- (id)closeAnimationView;
- (id)backgroundAnimationView;
- (void)p_trackEvent:(id)a0 param:(id)a1;
- (id)p_snapShotImage:(id)a0;
- (void)p_redirectToDetails;
- (void)p_parseDataFromInfoResponse:(id)a0 message:(id)a1;
- (void)p_openRedPacketAuto:(BOOL)a0;
- (void)p_setupAndPushDetailVC:(id)a0 animatedShow:(BOOL)a1;
- (void)openRedPacketSuccessWithModel:(id)a0 modelInfo:(id)a1 message:(id)a2;
- (void)p_openRP;
- (void)popAndDismissCompletion:(id /* block */)a0;
- (id)initWithPreviewInfo:(id)a0 cardConfigModel:(id)a1 coverModel:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
