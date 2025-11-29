@class NSString;

@interface ChatBotWeAppReportDataPB : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *cmdId;
@property (retain, nonatomic) NSString *cmdTaskId;
@property (retain, nonatomic) NSString *cmdMethod;
@property (nonatomic) int cmdRetCode;
@property (nonatomic) int processTextType;
@property (retain, nonatomic) NSString *processTextContent;
@property (nonatomic) unsigned long long timeStampMs;
@property (nonatomic) BOOL isResultSatisfaction;
@property (retain, nonatomic) NSString *chatbotAnswerId;
@property (nonatomic) int rudpRetCode;
@property (nonatomic) unsigned long long rudpMsgId;
@property (retain, nonatomic) NSString *rudpFunctionCallId;

+ (void)initialize;

@end
