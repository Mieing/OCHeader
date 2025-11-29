@class WCFinderGetFeedAsyncInfoCGIConfig, NSString, JsApiSourceInfo, CMessageWrap, LongVideoPlayerContext;

@interface WCFinderShareListReportModel : NSObject

@property (nonatomic) unsigned long long enterScene;
@property (copy, nonatomic) NSString *sourceUser;
@property (copy, nonatomic) NSString *fromUsername;
@property (copy, nonatomic) NSString *chatRoomUsername;
@property (copy, nonatomic) NSString *toUsername;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSString *reportExtraInfo;
@property (nonatomic) BOOL byPush;
@property (nonatomic) unsigned long long requestScene;
@property (nonatomic) int cardType;
@property (nonatomic) BOOL forceShowRingtoneGuide;
@property (nonatomic) int ringtoneEventType;
@property (retain, nonatomic) WCFinderGetFeedAsyncInfoCGIConfig *asyncConfig;
@property (retain, nonatomic) NSString *finderForwardSource;
@property (retain, nonatomic) LongVideoPlayerContext *longVideoContext;
@property (nonatomic) unsigned long long shareCardSourceCommentScene;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (copy, nonatomic) NSString *jumpInfoBypassInfo;
@property (copy, nonatomic) NSString *shareMsgSource;
@property (copy, nonatomic) NSString *shareMsgSvrID;
@property (copy, nonatomic) NSString *publisherId;
@property (copy, nonatomic) NSString *messageID;
@property (retain, nonatomic) CMessageWrap *originalMsgWrap;

- (id)init;
- (void).cxx_destruct;

@end
