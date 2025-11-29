@class NSString;

@interface WCAdConversionOnlineEventBizModel : NSObject

@property (retain, nonatomic) NSString *aid;
@property (retain, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSString *pid;
@property (nonatomic) unsigned long long costTime;
@property (nonatomic) int downloadScene;
@property (nonatomic) int actor;
@property (nonatomic) int actCode;
@property (nonatomic) int deeplinkScene;
@property (nonatomic) int deeplinkType;
@property (nonatomic) int autoDownload;
@property (nonatomic) int dialogType;
@property (nonatomic) int wvProgress;
@property (nonatomic) int lpType;
@property (nonatomic) int clickReqType;
@property (nonatomic) int originErrorCode;
@property (retain, nonatomic) NSString *pageExitAction;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *vangoghId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
