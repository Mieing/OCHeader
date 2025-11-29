@class NSString, AWEPlayInteractionGeneralActivityView, AWECampaignGeneralActivityButtonDataModel, AWECampaignGeneralActivityElementModel;

@interface AWEPlayInteractionGeneralActivityElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayInteractionGeneralActivityView *generalActivityView;
@property (retain, nonatomic) AWECampaignGeneralActivityElementModel *activityButtonModel;
@property (retain, nonatomic) AWECampaignGeneralActivityButtonDataModel *currentButtonData;
@property (copy, nonatomic) id /* block */ playPeriodChangeBlock;
@property (nonatomic) BOOL hasShowElement;
@property (nonatomic) BOOL isRouting;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)trackShowEvent;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)prepareForActivate;
- (void)viewDidDisposed;
- (BOOL)p_shouldShow;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (BOOL)shouldActiveWithModel:(id)a0;
- (void)removeVideoPlayPeriodObserver;
- (void)addVideoPlayPeriodObserver;
- (void)removeTokenWithinSlardar;
- (void)addTokenToSlardar;
- (void)updateGeneralActivityViewWithDelay:(BOOL)a0;
- (void)dismissActivityElement;
- (void)jumpPageWithSchema:(id)a0 success:(id /* block */)a1;
- (void)requestServerWithPath:(id)a0 success:(id /* block */)a1;
- (void)responseClickEventWithButton:(id)a0 andInfo:(id)a1;
- (BOOL)shouldShowGeneralActivityElement;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end
