@class NSString, NSMutableDictionary;
@protocol GC23070ReportDelegate;

@interface GC23070Report : NSObject

@property (nonatomic) unsigned long long SceneID;
@property (nonatomic) unsigned long long UIArea;
@property (nonatomic) unsigned long long PositionID;
@property (nonatomic) unsigned long long ActionID;
@property (nonatomic) unsigned long long ActionStatus;
@property (nonatomic) unsigned long long Ssid;
@property (nonatomic) unsigned long long SourceID;
@property (retain, nonatomic) NSString *GameID;
@property (retain, nonatomic) NSString *ChatroomID;
@property (nonatomic) unsigned long long MessageID;
@property (retain, nonatomic) NSString *GameLeval;
@property (retain, nonatomic) NSString *GameTitle;
@property (nonatomic) unsigned long long UserState;
@property (retain, nonatomic) NSString *Username;
@property (nonatomic) unsigned long long StayTime;
@property (retain, nonatomic) NSMutableDictionary *externInfoDict;
@property (retain, nonatomic) NSString *NoticeID;
@property (nonatomic) long long TalkTab;
@property (retain, nonatomic) NSString *vcKey;
@property (retain, nonatomic) NSString *subKey;
@property (weak, nonatomic) id<GC23070ReportDelegate> reportDelegate;
@property (nonatomic) BOOL isExposureReported;

+ (id)reportModelForVc:(id)a0 subKey:(id)a1;
+ (id)dataForChatTabScene;
+ (id)dataForFindMoreScene;
+ (id)dataForChatRoomScene;
+ (void)reportExplosureWithVc:(id)a0 subKey:(id)a1 reportBlock:(id /* block */)a2;

- (id)init;
- (void)report;
- (void)reportWithActionId:(unsigned long long)a0;
- (void)reportExplosure;
- (void)reportWithPosId:(unsigned long long)a0 actionid:(unsigned long long)a1;
- (void)reportWithPosId:(unsigned long long)a0 actionid:(unsigned long long)a1 actionStatus:(unsigned long long)a2;
- (void)reportWithPosId:(unsigned long long)a0 actionid:(unsigned long long)a1 actionStatus:(unsigned long long)a2 addtionDict:(id)a3;
- (id)toString;
- (void)configureGetDataReportBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
