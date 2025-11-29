@class AWEAdMultiPlatformPreferredModel, NSString, NSDictionary, AWEAwemeModel, AWEAdWebviewInfo, UIResponder, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface CMCAdContext : CMCContext

@property (copy, nonatomic) id /* block */ taskExcutedCompletionBlock;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *trackTag;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) id /* block */ webViewControllerDidClose;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) AWEAdMultiPlatformPreferredModel *multiPlatformPreferredModel;
@property (copy, nonatomic) NSString *ironManURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *formURL;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) BOOL isFromLive;
@property (nonatomic) BOOL shouldSkipTask;
@property (nonatomic) BOOL isAuthorURLLandingSupported;
@property (retain, nonatomic) AWEAdWebviewInfo *webviewInfo;
@property (nonatomic) BOOL shouldLightLandingShowingHighPriority;
@property (nonatomic) BOOL disableLightWebURL;
@property (nonatomic) BOOL isTrial;
@property (nonatomic) BOOL isFromPlayableMask;
@property (nonatomic) BOOL isLynxButtonClick;
@property (nonatomic) BOOL isComponentClick;
@property (nonatomic) BOOL isNativeClick;
@property (nonatomic) BOOL isClickFromComment;
@property (nonatomic) BOOL useFadeInPush;
@property (nonatomic) BOOL disableLynxLandingPage;
@property (nonatomic) BOOL needShowLiveByOpenURL;
@property (nonatomic) BOOL disableScrollInLiveStream;
@property (copy, nonatomic) NSString *complianceData;
@property (weak, nonatomic) UIResponder *clickedTarget;
@property (copy, nonatomic) NSString *btmInfo;
@property (nonatomic) BOOL didOpenAppStore;
@property (nonatomic) BOOL isClueArea;
@property (copy, nonatomic) NSString *frequentlyAskedQuestions;
@property (retain, nonatomic) NSString *clickPosition;
@property (nonatomic) BOOL isConvertMiddleWillingnesClick;
@property (nonatomic) BOOL isBiddingAdsWechatEntrance;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionContainer;

- (void).cxx_destruct;

@end
