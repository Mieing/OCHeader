@class UITapGestureRecognizer, AWELiveRelatedRecommendPanelController, NSString, YYLabel;

@interface AWELiveStreamTitleElement : AWELiveLeftElement <UIGestureRecognizerDelegate, AWELivePreStreamMessageSubscriber, AWELivePreStreamNewContainerAction>

@property (retain, nonatomic) AWELiveRelatedRecommendPanelController *relatedRecommendPanelController;
@property (retain, nonatomic) YYLabel *liveTitleLabel;
@property (retain, nonatomic) UITapGestureRecognizer *descLabelTapGesture;
@property (nonatomic) BOOL needDeleteTag;
@property (retain, nonatomic) NSString *originTitle;
@property (nonatomic) BOOL enableUserPreText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)didSetAttachingDIContext;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)preloadElement;
- (BOOL)isFollow;
- (void)preStreamVC_viewDidAppear;
- (void)application_DidBecomeActive;
- (void)streamPlayer_finish;
- (void)onRightAreaChange:(double)a0;
- (void)refreshRightContainer:(double)a0;
- (void)p_gestureAction:(id)a0;
- (id)appendString:(id)a0 and:(id)a1;
- (BOOL)shouldShowOpenMoreButton;
- (void)trackLiveOpenMoreWithEvent:(id)a0;
- (id)vsTitle;
- (void)updateLiveTitle:(id)a0 deleteTag:(BOOL)a1;
- (double)fontSizeWithOriginSize:(double)a0;
- (id)buildEnterRoomHighlight;
- (id)p_attributeStringForEcomTags;
- (BOOL)p_enableShowChallenge;
- (id)p_attributeStringForChallenge;
- (void)ecmoTagClickEvent:(id)a0;
- (id)buildEnterRoomHighlightWithEcmoTag:(id)a0;
- (void)onChallengeClick;
- (void)trackChallengeClickEvent;
- (id)buildSportTitle;
- (id)p_handleVSTitleDesc;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (id)truncationToken;

@end
