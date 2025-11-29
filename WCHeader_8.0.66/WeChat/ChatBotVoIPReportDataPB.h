@class NSString;

@interface ChatBotVoIPReportDataPB : WXPBGeneratedMessage

@property (nonatomic) long long timeStampMs;
@property (nonatomic) long long roomId;
@property (nonatomic) long long fromUserUin;
@property (nonatomic) int roomType;
@property (retain, nonatomic) NSString *chatBotUsername;
@property (nonatomic) int action;
@property (retain, nonatomic) NSString *userMsgId;
@property (nonatomic) int netWorkType;
@property (retain, nonatomic) NSString *chatbotAnswerId;
@property (nonatomic) int roomMemberCount;
@property (nonatomic) int cardType;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *talkingChatBotUsername;
@property (nonatomic) int openScene;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) long long voiceFragmentStartTime;
@property (nonatomic) long long voiceFragmentEndTime;
@property (retain, nonatomic) NSString *roomIdentifier;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *audioId;
@property (nonatomic) unsigned long long audioTransferLen;
@property (retain, nonatomic) NSString *extraInfo;

+ (void)initialize;

@end
