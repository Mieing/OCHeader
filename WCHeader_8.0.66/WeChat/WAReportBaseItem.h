@class NSString, NSMutableArray, WAReportItemParamChainModel;

@interface WAReportBaseItem : MMObject

@property (retain, nonatomic) NSMutableArray *paramArr;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *sceneNote;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) unsigned long long debugMode;
@property (nonatomic) long long appVersion;
@property (nonatomic) unsigned long long appstate;
@property (nonatomic) unsigned long long usedstate;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *networkType;
@property (nonatomic) unsigned int uiNetworkType;
@property (nonatomic) unsigned int weakNetType;
@property (nonatomic) unsigned int uiPublibVersion;
@property (copy, nonatomic) NSString *strPublibVersion;
@property (nonatomic) unsigned long long preScene;
@property (copy, nonatomic) NSString *preSceneNote;
@property (copy, nonatomic) NSString *referPagePath;
@property (nonatomic) BOOL isEntrance;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) unsigned int exptIOSUseByteCode;
@property (readonly, nonatomic) WAReportItemParamChainModel *param;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void)startAppendParam;
- (void)appendString:(id)a0;
- (void)appendUInt32:(unsigned int)a0;
- (void)appendUInt64:(unsigned long long)a0;
- (void)appendInt:(int)a0;
- (void)appendUInteger:(unsigned long long)a0;
- (id)getJoinedParamStr;
- (void)report;
- (void).cxx_destruct;

@end
