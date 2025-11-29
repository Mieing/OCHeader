@class NSString, NSDictionary;

@interface Kv20488Reporter : NSObject

@property (nonatomic) unsigned int SceneID;
@property (nonatomic) unsigned int UIArea;
@property (nonatomic) unsigned int PositionID;
@property (nonatomic) unsigned int ActionID;
@property (nonatomic) unsigned int SourceID;
@property (retain, nonatomic) NSString *GameID;
@property (retain, nonatomic) NSString *ActionStatus;
@property (nonatomic) unsigned int GiftID;
@property (nonatomic) unsigned int GiftType;
@property (nonatomic) unsigned int FromAccountType;
@property (retain, nonatomic) NSString *FromUsername;
@property (nonatomic) unsigned int ToAccountType;
@property (retain, nonatomic) NSString *ToUsername;
@property (nonatomic) unsigned int RedDot;
@property (nonatomic) unsigned int TotalNum;
@property (retain, nonatomic) NSString *SessionId;
@property (retain, nonatomic) NSDictionary *ExternInfo;
@property (nonatomic) unsigned int Time;
@property (nonatomic) long long GameType;
@property (nonatomic) long long ssid;

+ (id)createReporter:(int)a0 uiArea:(int)a1 positionId:(unsigned int)a2 actionId:(int)a3 sourceId:(unsigned int)a4;
+ (void)reportConversationItem:(unsigned int)a0 actionId:(int)a1 totalNum:(unsigned int)a2 conversation:(id)a3 sourceId:(unsigned int)a4 actionStatus:(id)a5 extInfoDic:(id)a6;
+ (id)getChatViewReporter:(int)a0 uiArea:(int)a1 pos:(unsigned int)a2 actionId:(int)a3 sessionId:(id)a4 sourceId:(unsigned int)a5 actionStatus:(id)a6;
+ (void)reportChattingViewItem:(unsigned int)a0 actionId:(int)a1 sessionId:(id)a2 sourceId:(unsigned int)a3 actionStatus:(id)a4;
+ (void)reportChatInfoDetailViewItem:(unsigned int)a0 actionId:(int)a1 sessionId:(id)a2 sourceId:(unsigned int)a3 actionStatus:(id)a4;
+ (void)reportChatInfoDetailViewBlackListItem:(unsigned int)a0 actionId:(int)a1 sessionId:(id)a2 sourceId:(unsigned int)a3 actionStatus:(id)a4 roleType:(unsigned int)a5;
+ (void)reportConversationExpose:(id)a0;

- (void)report;
- (id)toString;
- (void).cxx_destruct;

@end
