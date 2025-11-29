@class WCFinderFullShareListTemplatePlugin, NSString, JsApiSourceInfo, WCFinderShareEntranceMessageInfo, NSData, WCFinderAdReportInfo, StreamTabTipsInfo, WCFinderPushFeedViewLiveParams, WCFinderPushFeedPlayParams, WCFinderPushFeedViewProductParams;
@protocol WCFinderFullShareListViewControllerDelegate;

@interface WCFinderPushFeedViewParams : NSObject

@property (nonatomic) BOOL notGetReleatedList;
@property (copy, nonatomic) NSString *fromSessionId;
@property (nonatomic) double startPlayVideoTime;
@property (nonatomic) BOOL notShowFooterView;
@property (nonatomic) BOOL notifyOnBack;
@property (nonatomic) BOOL enterLiveRoom;
@property (copy, nonatomic) NSString *channelExtra;
@property (copy, nonatomic) id /* block */ callBackBlock;
@property (copy, nonatomic) id /* block */ feedStopPlayCallback;
@property (copy, nonatomic) id /* block */ willBePodedCallBackBlock;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) WCFinderAdReportInfo *adReportInfo;
@property (copy, nonatomic) id /* block */ adRelatedSuccessBlock;
@property (nonatomic) long long adJSAPIType;
@property (copy, nonatomic) NSString *rewardAdMarketingWord;
@property (nonatomic) long long rewardAdCountdownTime;
@property (nonatomic) unsigned long long ringSheetComponentFlag;
@property (copy, nonatomic) NSString *ringFriendName;
@property (nonatomic) unsigned long long ringtoneFeedEnterType;
@property (retain, nonatomic) NSString *customTitle;
@property (nonatomic) BOOL fromKeepHolder;
@property (nonatomic) BOOL pauseDefault;
@property (copy, nonatomic) id /* block */ customCloseAction;
@property (nonatomic) BOOL fromPhotoWall;
@property (retain, nonatomic) WCFinderPushFeedPlayParams *feedPlayParams;
@property (retain, nonatomic) WCFinderFullShareListTemplatePlugin *jsapiPlugin;
@property (nonatomic) BOOL allowInfiniteTopPull;
@property (copy, nonatomic) NSString *shareMsgSource;
@property (copy, nonatomic) NSString *shareMsgSvrID;
@property (copy, nonatomic) NSString *ecSource;
@property (retain, nonatomic) WCFinderShareEntranceMessageInfo *entranceMessageInfo;
@property (retain, nonatomic) JsApiSourceInfo *sourceInfo;
@property (retain, nonatomic) NSData *shareBypData;
@property (nonatomic) BOOL playInPushAnimating;
@property (retain, nonatomic) StreamTabTipsInfo *tabTipsInfo;
@property (nonatomic) BOOL needOpenJumpInfo;
@property (retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo;
@property (copy, nonatomic) NSString *tipsUuid;
@property (copy, nonatomic) id /* block */ pushCompletionBlock;
@property (weak, nonatomic) id<WCFinderFullShareListViewControllerDelegate> shareVCDelagate;
@property (nonatomic) BOOL ignoreUpdateContextId;
@property (nonatomic) BOOL showScrollUpTips;
@property (retain, nonatomic) WCFinderPushFeedViewLiveParams *liveParams;
@property (nonatomic) unsigned long long refCommentId;

- (void)setStartPlayVideoTime:(double)a0;
- (double)startPlayVideoTime;
- (void).cxx_destruct;

@end
