@class TIMXPBNNotifyGetConversationListResponseBody, TIMXPBNGetRecentMessageRespBody, TIMXPBNGetCmdMessageRespBody, TIMXPBNConversationReadInfoRespBody, TIMXPBNConsultGetConversationListResponseBody, TIMXPBNGetCmdMessageChainV2RespBody;

@interface TIMXPBNGetUserMessageResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNGetRecentMessageRespBody *messages;
@property (nonatomic) BOOL hasMessages;
@property (retain, nonatomic) TIMXPBNGetCmdMessageRespBody *cmdMessages;
@property (nonatomic) BOOL hasCmdMessages;
@property (nonatomic) BOOL hasStrangerMessage;
@property (nonatomic) BOOL hasHasStrangerMessage;
@property (retain, nonatomic) TIMXPBNConversationReadInfoRespBody *readInfo;
@property (nonatomic) BOOL hasReadInfo;
@property (retain, nonatomic) TIMXPBNConsultGetConversationListResponseBody *consultMessages;
@property (nonatomic) BOOL hasConsultMessages;
@property (retain, nonatomic) TIMXPBNNotifyGetConversationListResponseBody *notifyMessages;
@property (nonatomic) BOOL hasNotifyMessages;
@property (retain, nonatomic) TIMXPBNGetRecentMessageRespBody *threadMessages;
@property (nonatomic) BOOL hasThreadMessages;
@property (retain, nonatomic) TIMXPBNConversationReadInfoRespBody *threadReadInfo;
@property (nonatomic) BOOL hasThreadReadInfo;
@property (retain, nonatomic) TIMXPBNGetCmdMessageChainV2RespBody *cmdMessageChainV2;
@property (nonatomic) BOOL hasCmdMessageChainV2;
@property (nonatomic) long long maxCmdMessageConvVersion;
@property (nonatomic) BOOL hasMaxCmdMessageConvVersion;

+ (id)descriptor;

- (long long)maxCmdMessageConvVersion;
- (id)cmdMessageChainV2;
- (BOOL)hasThreadReadInfo;
- (BOOL)hasReadInfo;
- (id)threadReadInfo;
- (id)threadMessages;
- (id)consultMessages;
- (id)cmdMessages;
- (id)readInfo;
- (id)messages;
- (BOOL)hasStrangerMessage;
- (BOOL)hasHasStrangerMessage;

@end
