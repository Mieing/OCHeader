@class ChatBotVoIPRoomInfo, ReportAiChatExtInfo;

@interface ChatBotBrandDataReporter : NSObject

@property (retain, nonatomic) ReportAiChatExtInfo *reportAiChatExtInfo;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (nonatomic) long long enterTime;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) long long startRecordingTime;

- (void)setBrandReportWithPage:(id)a0 reportAiChatExtInfo:(id)a1 roomInfo:(id)a2;
- (void)setBrandReportWithBackBtn:(id)a0;
- (void)reportUserJoinRoom:(unsigned long long)a0;
- (void)reportAiJoinRoom;
- (void)reportUserSpeakBegin;
- (void)reportUserSpeakEnd;
- (id)genCommonReportData;
- (void).cxx_destruct;

@end
