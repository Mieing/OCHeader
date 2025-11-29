@class WCFinderProfilePreloadInfo, WCFinderMyTabEntranceParams, NSDictionary, JsApiSourceInfo, UIViewController, FinderMention_FinderMentionThankInfo_RedPackageInfo, UIView, WCFinderStreamProfileExtInfo, NSString, WCFinderDataItem, WCFinderShareEntranceMessageInfo, WCFinderJustWatchCollectionFeedItem, WCFinderJustWatchFeedInfo;
@protocol WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderPushProfileParams : NSObject

@property (nonatomic) int reportScene;
@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (nonatomic) BOOL isNotRefFeedAuthor;
@property (nonatomic) int cardType;
@property (copy, nonatomic) NSString *adParamInfoStr;
@property (copy, nonatomic) NSString *commentAdInfo;
@property (nonatomic) int enterScene;
@property (nonatomic) int enterType;
@property (nonatomic) unsigned long long avatarType;
@property (nonatomic) BOOL isAvatarLivingShowing;
@property (retain, nonatomic) NSString *refPageType;
@property (nonatomic) unsigned long long streamEntranceType;
@property (nonatomic) BOOL fromEventDescriptionContact;
@property (nonatomic, getter=isFromOtherBusiness) BOOL fromOtherBusiness;
@property (copy, nonatomic) NSString *otherBusinessExtraInfo;
@property (copy, nonatomic) NSString *enterSourceFeedID;
@property (nonatomic) long long qrcodeScene;
@property (copy, nonatomic) NSString *qrCodeURL;
@property (copy, nonatomic) NSString *liveNoticeEncryptedId;
@property (copy, nonatomic) NSString *promoterToken;
@property (nonatomic) BOOL showsMoreNoticesAutomatically;
@property (nonatomic) double timeoutIntervalForShowingMoreNoticesAutomatically;
@property (nonatomic) BOOL showHalfScreen;
@property (nonatomic) BOOL halfShowBgMask;
@property (weak, nonatomic) UIView *bgResponder;
@property (retain, nonatomic) NSString *redPacketLinkUrl;
@property (retain, nonatomic) NSString *redPacketCoverId;
@property (nonatomic) long long redPacketJumpFrom;
@property (nonatomic) int selectedTab;
@property (retain, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *fromLiveId;
@property (copy, nonatomic) NSString *fromScene;
@property (weak, nonatomic) UIViewController<WCFinderFeedBaseViewControllerProtocol> *fromVC;
@property (copy, nonatomic) NSString *fromUsername;
@property (copy, nonatomic) NSString *talkerName;
@property (retain, nonatomic) WCFinderJustWatchCollectionFeedItem *justWatchCollectionFeedItem;
@property (nonatomic) BOOL isInsideFinderCallJsapi;
@property (nonatomic) BOOL forbidenRecursiveSameContactJump;
@property (copy, nonatomic) NSString *ecSource;
@property (retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (retain, nonatomic) NSString *noticeJumperAdReportInfo;
@property (retain, nonatomic) NSString *livingJumperAdReportInfo;
@property (retain, nonatomic) WCFinderMyTabEntranceParams *myTabParams;
@property (copy, nonatomic) NSDictionary *enterPageUdfKv;
@property (retain, nonatomic) WCFinderDataItem *fromDataItem;
@property (nonatomic) int fromFeedScene;
@property (nonatomic) unsigned int followScene;
@property (retain, nonatomic) WCFinderProfilePreloadInfo *preloadInfo;
@property (retain, nonatomic) WCFinderStreamProfileExtInfo *passProfileExtInfo;
@property (copy, nonatomic) NSDictionary *businessByPass;
@property (retain, nonatomic) FinderMention_FinderMentionThankInfo_RedPackageInfo *mentionThanksRedpackageInfo;
@property (copy, nonatomic) NSDictionary *additionalClientUdfKV;
@property (retain, nonatomic) WCFinderJustWatchFeedInfo *jumpFeedInfo;
@property (nonatomic) BOOL asAuthor;
@property (retain, nonatomic) NSString *exportUsername;
@property (copy, nonatomic) id /* block */ profileCloseCallback;

+ (id)defaultParams;

- (id)init;
- (id)copy;
- (void)setupShowJustWatchToFeed:(id)a0 sessionBuffer:(id)a1;
- (void)setupPoiJumpToFeed:(id)a0;
- (void)setupLiveAdditionalUdfKVToDataItem:(id)a0 enterSessionId:(unsigned long long)a1;
- (void).cxx_destruct;

@end
