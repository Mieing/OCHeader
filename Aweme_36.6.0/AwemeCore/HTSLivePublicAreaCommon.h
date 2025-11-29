@class NSString, HTSLiveImage, HTSLivePersonalizedDisplayInfo, NSMutableDictionary, HTSLiveHoverInfo, IESLiveChatReplyRespInfo, HTSLiveChatMentionInfo, HTSLiveSuffixText;

@interface HTSLivePublicAreaCommon : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *userLabel;
@property (nonatomic) BOOL hasUserLabel;
@property (nonatomic) long long userConsumeInRoom;
@property (nonatomic) long long userSendGiftCntInRoom;
@property (nonatomic) long long individualPriority;
@property (retain, nonatomic) NSMutableDictionary *individualStrategyResult;
@property (readonly, nonatomic) unsigned long long individualStrategyResult_Count;
@property (nonatomic) long long supportPin;
@property (retain, nonatomic) HTSLiveSuffixText *suffixText;
@property (nonatomic) BOOL hasSuffixText;
@property (nonatomic) int imAction;
@property (nonatomic) BOOL forbiddenProfile;
@property (retain, nonatomic) IESLiveChatReplyRespInfo *replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (retain, nonatomic) NSMutableDictionary *trackingParams;
@property (readonly, nonatomic) unsigned long long trackingParams_Count;
@property (nonatomic) long long isFeatured;
@property (nonatomic) BOOL needFilterDisplay;
@property (retain, nonatomic) HTSLivePersonalizedDisplayInfo *personalizedDisplayInfo;
@property (nonatomic) BOOL hasPersonalizedDisplayInfo;
@property (nonatomic) long long forceInsertionPriority;
@property (retain, nonatomic) HTSLiveChatMentionInfo *mentionInfo;
@property (nonatomic) BOOL hasMentionInfo;
@property (retain, nonatomic) HTSLiveHoverInfo *hoverInfo;
@property (nonatomic) BOOL hasHoverInfo;
@property (nonatomic) BOOL showInDanmaku;
@property (nonatomic) BOOL isLikeComment;
@property (nonatomic) BOOL batchRefresh;
@property (nonatomic) BOOL isAiMsg;
@property (nonatomic) BOOL shouldLogLightInteractMob;
@property (retain, nonatomic) NSMutableDictionary *lightInteractMobParams;
@property (readonly, nonatomic) unsigned long long lightInteractMobParams_Count;
@property (nonatomic) int tailInteractType;
@property (copy, nonatomic) NSString *defaultClickSchemaURL;

+ (id)descriptor;

@end
