@class NSString;

@interface ChatBotVoIPReportData : ChatBotReportData

@property (nonatomic) unsigned long long internalTimeStampMs;
@property (readonly, nonatomic) unsigned long long timeStampMS;
@property (nonatomic) unsigned long long roomId;
@property (readonly, nonatomic) unsigned long long fromUserUin;
@property (nonatomic) unsigned int roomType;
@property (retain, nonatomic) NSString *chatBotUsername;
@property (nonatomic) int action;
@property (retain, nonatomic) NSString *userMsgId;
@property (readonly, nonatomic) unsigned int network;
@property (retain, nonatomic) NSString *chatBotAnswerId;
@property (nonatomic) unsigned int roomMemberCount;
@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *cardID;
@property (retain, nonatomic) NSString *talkingChatBotUsername;
@property (nonatomic) unsigned int openScene;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)logId;
- (id)getLogContent;
- (void).cxx_destruct;

@end
