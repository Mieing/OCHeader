@class NSString;

@interface Kv20267Reporter : NSObject

@property (retain, nonatomic) NSString *AppId;
@property (nonatomic) unsigned int AppVersion;
@property (nonatomic) unsigned int AppState;
@property (retain, nonatomic) NSString *NetworkType;
@property (nonatomic) unsigned int SSID;
@property (nonatomic) unsigned int ToUin;
@property (nonatomic) unsigned int SceneID;
@property (nonatomic) unsigned int UIArea;
@property (nonatomic) unsigned int PositionID;
@property (nonatomic) unsigned int ActionID;
@property (retain, nonatomic) NSString *ActionStatus;
@property (nonatomic) unsigned int OpType;
@property (retain, nonatomic) NSString *Object;
@property (retain, nonatomic) NSString *Status;
@property (nonatomic) unsigned int SourceID;
@property (retain, nonatomic) NSString *Allpath;
@property (nonatomic) unsigned int ExpID;
@property (nonatomic) unsigned int LogType;
@property (retain, nonatomic) NSString *ErrType;
@property (nonatomic) unsigned int Time;
@property (nonatomic) unsigned int FuncType;
@property (retain, nonatomic) NSString *FuncID;
@property (nonatomic) unsigned int ContentType;
@property (nonatomic) unsigned int ContentID;
@property (nonatomic) unsigned int ReasonID;
@property (retain, nonatomic) NSString *ExternInfo;
@property (nonatomic) unsigned int ClassID;

+ (id)createReportWithScenceID:(int)a0 uiArea:(int)a1 positionId:(unsigned int)a2 actionId:(int)a3 externInfo:(id)a4 appId:(id)a5;

- (id)toString;
- (void)report;
- (void).cxx_destruct;

@end
