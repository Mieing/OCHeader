@class NSString;

@interface EmoticonSearchInMessagePanelReporter : NSObject

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *chatId;
@property (retain, nonatomic) NSString *searchID;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned int sourceScene;

- (id)initWithChatId:(id)a0;
- (id)initWithChatId:(id)a0 sessionId:(id)a1;
- (void)beginSession;
- (void)doReport:(id)a0 actionType:(unsigned int)a1 md5s:(id)a2 total:(unsigned int)a3 position:(unsigned int)a4 maxIndex:(unsigned int)a5;
- (void)doReportSearchEntranceClick:(unsigned int)a0;
- (void).cxx_destruct;

@end
