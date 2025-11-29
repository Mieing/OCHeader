@class NSTimer, NSString, UIView, AWEPageContext, AWEAwemeModel, NSDictionary, NSObject, AWEBubble;
@protocol AWEFeedAnchorViewBehaviorProtocol, AWEAwemePlayInteractionUIDisplayDelegate, AWEPOIEntryAnchorViewManagerProtocol, AWEPOIPromptCardManager, AWEAwemePlayInteractionUpdateDelegate, AWEMultiAnchorExtendViewProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEPOIAnchorBubbleManagerProtocol, AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWEFeedAnchorPOIConfig : AWEFeedAnchorBaseConfig <AWEPOIPlayInteractionVCManagerProtocol, AWEPOIEntryAnchorViewManagerDelegate, AWEFeedAnchorPOIConfigProtocol>

@property (retain, nonatomic) NSTimer *poiShowDetailTimer;
@property (retain, nonatomic) NSTimer *poiRecruitedBubbleTimer;
@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (nonatomic) BOOL disableRecruitedBubble;
@property (nonatomic) BOOL shouldUploadPOISlideInfo;
@property (nonatomic) BOOL isFromAvatarLiveElement;
@property (retain, nonatomic) UIView<AWEFeedAnchorViewBehaviorProtocol, AWEMultiAnchorExtendViewProtocol> *poiEntryView;
@property (retain, nonatomic) NSObject *collectObserver;
@property (retain, nonatomic) NSObject *douDiscountObserver;
@property (retain, nonatomic) AWEBubble *recruitedBubble;
@property (retain, nonatomic) NSString *creationId;
@property (nonatomic) BOOL anchorInitializeMark;
@property (copy, nonatomic) NSString *POIIDInLogExtra;
@property (retain, nonatomic) id<AWEPOIEntryAnchorViewManagerProtocol> anchorManager;
@property (retain, nonatomic) id<AWEPOIAnchorBubbleManagerProtocol> bubbleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ anchorViewDidDisappearBlock;
@property (nonatomic) long long sceneType;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1 anchorInfo:(id)a2;
+ (void)onMutableAnchorSheetShowWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (void)onMutableAnchorSheetClickWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)onPoiLabelClicked:(id)a0;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)showPOIDetail;
- (void)showPOIPromptCard;
- (BOOL)shouldShowPoiButton;
- (void)tryHidePauseIcon;
- (void)tryShowPauseIcon;
- (void)hideInteractionControllerWithAnimation:(BOOL)a0;
- (void)resumeInteractionControllerWithAnimation:(BOOL)a0;
- (void)switchPlayStateWithAnimation:(BOOL)a0;
- (void)playWithAnimation:(BOOL)a0;
- (void)pauseWithAnimation:(BOOL)a0;
- (void)showPOIPromptCardImmediately:(BOOL)a0;
- (void)setupPOIPromptCard;
- (void)trackProjectCardShow;
- (void)updatePromptLogExtraWithAwemeModel:(id)a0;
- (void)trackAdPoiPointShow;
- (void)startShowPOIDetailTimerIfNeeded;
- (id)createPOIAnchorManagerContext;
- (void)trackSearchDouPlushAnchorPOIShow;
- (id)getFeedPOIStyle;
- (id)createPOIRankAnchorManagerContext;
- (BOOL)shouldShowPoiDetail;
- (BOOL)didOriginADInfoHasTimerExtendPOI;
- (void)invalidateRecruitedTimer;
- (void)showRecruitedBubbleWithText:(id)a0;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)reset;
- (void)dealloc;

@end
