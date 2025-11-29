@class NSString;

@interface MMEasterEggActivityChatReportObject : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long isChatRoom;
@property (nonatomic) unsigned long long isReceiver;
@property (nonatomic) unsigned long long effectType;
@property (retain, nonatomic) NSString *keyword;

- (void)setupSessionId:(id)a0;
- (void)setupKeyword:(id)a0 userName:(id)a1 isChatRoom:(long long)a2 isReceiver:(long long)a3 effectType:(long long)a4;
- (void)reportChatAction:(unsigned long long)a0;
- (void)reportChatAction:(unsigned long long)a0 extendString:(id)a1;
- (void)reportChatAction:(unsigned long long)a0 keyword:(id)a1 extendString:(id)a2 allKeyWords:(id)a3;
- (void)reportTriggerWithAllKeyWords:(id)a0;
- (void)reportEggJoinActionWithKeyword:(id)a0;
- (void).cxx_destruct;

@end
