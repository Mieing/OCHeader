@class WCFinderPushFeedViewProductParams, NSString, FinderLiveReportBaseInfo, StreamTabTipsInfo, WCFinderGetDetailDataItemCGIConfig, JsApiSourceInfo, FinderShareUserInfo, FinderLivePermissionVerifyInfo, FinderClientStatus;

@interface WCFinderGetCommentDetailDataItemCGIParams : NSObject

@property (copy, nonatomic) NSString *containerId;
@property (retain, nonatomic) StreamTabTipsInfo *tabTipsInfo;
@property (retain, nonatomic) WCFinderPushFeedViewProductParams *productInfo;
@property (nonatomic) BOOL preloadFirstFrameInWIFI;
@property (nonatomic) BOOL isPrefetchRequest;
@property (copy, nonatomic) NSString *fluencyReportSceneKey;
@property (retain, nonatomic) WCFinderGetDetailDataItemCGIConfig *config;
@property (retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (copy, nonatomic) NSString *gMsgId;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (nonatomic) unsigned long long relatedScene;
@property (copy, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;
@property (nonatomic) BOOL ignoreAutoToast;

- (void).cxx_destruct;

@end
