@class AWEPlayInteractionAnchorViewModel, NSString;

@interface AWEPlayInteractionFeedAnchorController : AWEPlayInteractionBaseController <AWEAwemePlayInteractionPresenterMethodDelegate, AWEPlayInteractionFeedAnchorControllerProtocol>

@property (retain, nonatomic) AWEPlayInteractionAnchorViewModel *anchorViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (void)onLinkAdButtonClicked:(id)a0;
- (void)onDouLinkButtonClicked:(id)a0;
- (void)onGameButtonTapped:(id)a0;
- (void)onIronManButtonTapped:(id)a0;
- (void)onMediumButtonTapped:(id)a0;
- (void)onMvLabelClicked:(id)a0;
- (void)onOneKeyLabelClicked:(id)a0;
- (void)onMusicBeatTemplateLabelClicked:(id)a0;
- (void)onGeneralLabelClicked:(id)a0;
- (void)onOpenPlatformLabelClicked:(id)a0;
- (void)onPoiLabelClicked:(id)a0;
- (void)onLocalLifeLabelClicked:(id)a0;
- (void)onShoppingCartIconClicked:(id)a0;
- (void)onStarAtlasLinkButtonClicked:(id)a0;
- (void)onStickerLabelClicked:(id)a0;
- (void)onTaskLinkButtonClicked:(id)a0;
- (void)onLikeButtonClicked:(id)a0;
- (void)onCommentButtonClicked:(id)a0;
- (void)onShareButtonTapped:(id)a0;
- (void)onGreenScreenLabelClicked:(id)a0;
- (void)onCarAnchorClicked:(id)a0;
- (void)onNormalAppAnchorClicked:(id)a0;
- (void)onSoloKTVLabelClicked:(id)a0;
- (void)enterMusicDetail:(id)a0;
- (void)onAuthorLabelClicked:(id)a0;
- (void)enterDiggedUser:(id)a0;
- (void)onMusicButtonClicked:(id)a0;
- (void)onAdDescriptionClicked:(id)a0 url:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)onDescriptionLabelClicked:(id)a0 url:(id)a1;
- (id)aAWEPadSplitScreenAdapter;
- (void)handleAnchorDetailPageEnterEventWithIdentifier:(id)a0;
- (void)handleAnchorDetailPageDismissEventWithIdentifier:(id)a0;
- (id)getCurrentAnchorConfig;
- (void)switchPlayStateWithAnimation:(BOOL)a0;
- (void)playWithAnimation:(BOOL)a0;
- (void)pauseWithAnimation:(BOOL)a0;
- (void)hideInteractionControllerWithAnimated:(BOOL)a0;
- (void)resumeInteractionControllerWithAnimated:(BOOL)a0;
- (void)handleLocalLifeDisappearEvent;
- (void)handleLocalLifeAppearEvent;
- (void)onShareButtonClicked:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
