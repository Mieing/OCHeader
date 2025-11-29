@class AIMessageWrapInfo, NSString, ChatInfoChangeMsg, VADMsg, ChatBotPrologueMsgWrapInfo, QuestionInfo, DownlinkSideInfo_Meta, DownlinkSideInfo_SpeakingAIInfo, DownlinkSideInfo_RecomMsg;

@interface DownlinkSideInfo : WXPBGeneratedMessage

@property (retain, nonatomic) QuestionInfo *questionInfo;
@property (nonatomic) int cmdType;
@property (retain, nonatomic) DownlinkSideInfo_SpeakingAIInfo *aiSpeaker;
@property (retain, nonatomic) AIMessageWrapInfo *msg;
@property (retain, nonatomic) NSString *weAppNotifyClientmsg;
@property (retain, nonatomic) NSString *textOutput;
@property (retain, nonatomic) DownlinkSideInfo_Meta *meta;
@property (retain, nonatomic) ChatInfoChangeMsg *chatInfoChange;
@property (retain, nonatomic) DownlinkSideInfo_RecomMsg *recomMsg;
@property (retain, nonatomic) VADMsg *vadMsg;
@property (retain, nonatomic) ChatBotPrologueMsgWrapInfo *prologueMsgInfo;
@property (nonatomic) unsigned int textOutputSeq;

+ (void)initialize;

@end
