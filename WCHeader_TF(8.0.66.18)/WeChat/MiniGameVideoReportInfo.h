@class NSString;

@interface MiniGameVideoReportInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) int uiArea;
@property (nonatomic) unsigned int positionID;
@property (nonatomic) int actionID;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) NSString *actionStatus;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appState;
@property (retain, nonatomic) NSString *externInfo;
@property (nonatomic) unsigned int funcType;

- (void).cxx_destruct;

@end
