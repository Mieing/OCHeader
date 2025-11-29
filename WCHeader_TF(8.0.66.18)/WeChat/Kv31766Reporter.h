@class NSString, NSDictionary;

@interface Kv31766Reporter : NSObject

@property (retain, nonatomic) NSString *AppId;
@property (nonatomic) unsigned int AppVersion;
@property (nonatomic) unsigned int AppState;
@property (nonatomic) unsigned long long ClassID;
@property (nonatomic) unsigned long long SceneID;
@property (nonatomic) unsigned long long UIArea;
@property (nonatomic) unsigned long long PositionID;
@property (nonatomic) unsigned long long ActionID;
@property (nonatomic) unsigned long long FuncType;
@property (retain, nonatomic) NSString *FuncID;
@property (nonatomic) unsigned int SSID;
@property (retain, nonatomic) NSDictionary *ExternInfo;

+ (void)reportForGameReview:(id)a0 appVersion:(unsigned int)a1 appState:(unsigned int)a2 positionID:(unsigned long long)a3 actionID:(unsigned long long)a4 reportData:(id)a5;

- (void)report;
- (void).cxx_destruct;

@end
