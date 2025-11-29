@class HTSLiveLikeIconInfo, HTSLiveMsgOptPanel, HTSLiveFusionEmojiBanList, HTSLiveFrequentlyChatInfo, HTSLiveChatImageGuideInfo, HTSLiveMatchChatInfo, HTSLiveHighlightConfig, HTSLiveAudienceMsgOptPanel, HTSLiveInputDefaultConfig, HTSLiveAIClone, HTSLiveRecommendShortcutEmoji, HTSLiveChatInputPanel, HTSLiveChatEmojiGuideInfo;

@interface RoomInteractionInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLikeIconInfo *likeIconInfo;
@property (nonatomic) BOOL hasLikeIconInfo;
@property (retain, nonatomic) HTSLiveChatEmojiGuideInfo *chatEmojiGuideInfo;
@property (nonatomic) BOOL hasChatEmojiGuideInfo;
@property (retain, nonatomic) HTSLiveChatImageGuideInfo *chatImageGuideInfo;
@property (nonatomic) BOOL hasChatImageGuideInfo;
@property (retain, nonatomic) HTSLiveMatchChatInfo *matchChatInfo;
@property (nonatomic) BOOL hasMatchChatInfo;
@property (retain, nonatomic) HTSLiveRecommendShortcutEmoji *recommendShortcutEmoji;
@property (nonatomic) BOOL hasRecommendShortcutEmoji;
@property (retain, nonatomic) HTSLiveFrequentlyChatInfo *frequentlyChatInfo;
@property (nonatomic) BOOL hasFrequentlyChatInfo;
@property (retain, nonatomic) HTSLiveChatInputPanel *chatInputPanel;
@property (nonatomic) BOOL hasChatInputPanel;
@property (retain, nonatomic) HTSLiveFusionEmojiBanList *fusionEmojiBanList;
@property (nonatomic) BOOL hasFusionEmojiBanList;
@property (retain, nonatomic) HTSLiveMsgOptPanel *msgOptPanel;
@property (nonatomic) BOOL hasMsgOptPanel;
@property (retain, nonatomic) HTSLiveAIClone *aiClone;
@property (nonatomic) BOOL hasAiClone;
@property (retain, nonatomic) HTSLiveAudienceMsgOptPanel *audienceMsgOptPanel;
@property (nonatomic) BOOL hasAudienceMsgOptPanel;
@property (retain, nonatomic) HTSLiveInputDefaultConfig *inputDefaultConfig;
@property (nonatomic) BOOL hasInputDefaultConfig;
@property (retain, nonatomic) HTSLiveHighlightConfig *highlightData;
@property (nonatomic) BOOL hasHighlightData;

+ (id)descriptor;

@end
