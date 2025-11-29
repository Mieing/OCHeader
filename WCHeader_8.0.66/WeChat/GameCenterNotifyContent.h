@class NSString, GamePreloadResourceData, GameCenterTabInfoNode, GameLifeInfo, GameMsgExtraData, GameCenterMsgFloayLayerInfo, GameCenterMsgBubbleInfo, GameCenterEntranceInfo, GameCenterMsgBannerInfo;

@interface GameCenterNotifyContent : NSObject

@property (retain, nonatomic) GameCenterEntranceInfo *entranceInfo;
@property (retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo;
@property (readonly, nonatomic) NSString *floatLayerUrl;
@property (readonly, nonatomic) long long floatLayerType;
@property (retain, nonatomic) GameCenterMsgFloayLayerInfo *floatLayerInfo;
@property (retain, nonatomic) GameCenterMsgBannerInfo *bannerInfo;
@property (retain, nonatomic) GameLifeInfo *gameLifeInfo;
@property (retain, nonatomic) GameMsgExtraData *gameMsgExtraData;
@property (retain, nonatomic) GameCenterTabInfoNode *tabInfoNode;
@property (retain, nonatomic) GamePreloadResourceData *preloadResourceData;
@property (nonatomic) int type;
@property (nonatomic) int msgReportType;
@property (nonatomic) BOOL disabledReport;
@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSString *svrMsgId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *originMsg;
@property (retain, nonatomic) NSString *reportExtData;
@property (retain, nonatomic) NSString *businessData;

- (long long)entranceNotifyType;
- (BOOL)isValidContent;
- (void).cxx_destruct;

@end
