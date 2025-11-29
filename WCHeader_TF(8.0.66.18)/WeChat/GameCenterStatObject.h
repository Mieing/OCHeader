@class NSString, NSDictionary;

@interface GameCenterStatObject : NSObject

@property (nonatomic) long long scene;
@property (nonatomic) int uiPosition;
@property (nonatomic) long long uiPositionNew;
@property (nonatomic) long long uiArea;
@property (nonatomic) long long action;
@property (nonatomic) unsigned int actionStatus;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) int sourceScene;
@property (nonatomic) int msgType;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) NSDictionary *externInfo;
@property (retain, nonatomic) NSString *Commid;
@property (retain, nonatomic) NSString *ClientIPV6;
@property (nonatomic) long long StartTime;
@property (nonatomic) long long EndTime;
@property (nonatomic) long long CostTime;
@property (copy, nonatomic) NSString *findPageSessionId;

- (id)initFor12909;
- (id)initFor13384;
- (void)initStatField;
- (int)getReportNetWorkType;
- (id)to12909;
- (id)to13384;
- (int)uiPosition;
- (void)setUiPosition:(int)a0;
- (void).cxx_destruct;

@end
