@class WCFinderPreviewLiveCGI, NSString, WCFinderFeedStreamGetLiveMsgCGI, NSData, WCFinderDataItem;

@interface MMFinderLiveFeedPreviewLogic : NSObject

@property (retain, nonatomic) NSString *logicID;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) WCFinderPreviewLiveCGI *joinLiveCgi;
@property (retain, nonatomic) WCFinderFeedStreamGetLiveMsgCGI *getLiveMsgCgi;
@property (nonatomic) BOOL canGetLiveMsg;
@property (nonatomic) BOOL hasRequestPreview;
@property (nonatomic) BOOL hasOffline;
@property (nonatomic) int joinLiveType;
@property (nonatomic) long long getLiveMsgScene;
@property (retain, nonatomic) NSData *multiStyleInfo;
@property (retain, nonatomic) NSData *uxInfo;
@property (retain, nonatomic) NSString *adData;
@property (copy, nonatomic) id /* block */ previewLastestCookieBlock;
@property (nonatomic) BOOL forceDisableGetLiveMsg;

- (id)initWithDataItem:(id)a0 scene:(int)a1 joinLiveType:(int)a2 getLiveMsgScene:(long long)a3 multiStyleInfo:(id)a4;
- (void)start;
- (void)stop;
- (void)offline;
- (void)internalJoinLive;
- (void)startGetLiveMsg;
- (void)continueGetLiveMsgWithDuration:(double)a0;
- (void)dealloc;
- (id)previewCookie;
- (void).cxx_destruct;

@end
