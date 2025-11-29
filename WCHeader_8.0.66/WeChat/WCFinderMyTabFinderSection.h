@class WCFinderPersonalCenterLiveActionHandle, WCFinderMyTabEntranceParams, WCFinderMyTabFinderCardView, WCFinderPersonalCenterCameraActionHandle, WCFinderContact, NSString, PrepareFinder, WCFinderPersonalCenterContactData;

@interface WCFinderMyTabFinderSection : WCFinderMyTabSectionController <WCFinderMyTabFinderCardViewDelegate, WCFinderUserPrepareExt, WCFinderContactExt, WCFinderRedDotNotifyExt>

@property (retain, nonatomic) WCFinderMyTabEntranceParams *params;
@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) PrepareFinder *prepare;
@property (retain, nonatomic) WCFinderPersonalCenterContactData *data;
@property (weak, nonatomic) WCFinderMyTabFinderCardView *cardView;
@property (retain, nonatomic) WCFinderPersonalCenterCameraActionHandle *cameraHandle;
@property (retain, nonatomic) WCFinderPersonalCenterLiveActionHandle *liveHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)paramsClass;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (id)displayTitle;
- (id)createDisplayCard;
- (int)commentScene;
- (void)_updateCardView;
- (void)_setupData;
- (long long)_cameraButtonState;
- (long long)_liveButtonState;
- (void)onViewDidBePushOrPresent;
- (void)finderUserPrepareUpdate:(id)a0;
- (void)onFinderContactUpdate:(id)a0;
- (void)onFinderNotifyFansCountNeedReload;
- (void)onFinderCardViewClickContact:(id)a0;
- (void)onFinderCardViewClickWording:(id)a0;
- (void)setupCleanWordingParamsAfterPushOtherPage;
- (id)creatorCenterURL;
- (id)appendReportArgumentToUrl:(id)a0;
- (void)onProfileEntranceCreatorWordingReadInfoChanged;
- (void).cxx_destruct;

@end
