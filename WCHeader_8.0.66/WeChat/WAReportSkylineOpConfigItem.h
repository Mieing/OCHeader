@class NSString;

@interface WAReportSkylineOpConfigItem : WAReportBaseItem

@property (retain, nonatomic) NSString *libVersion;
@property (retain, nonatomic) NSString *libUpdateTime;
@property (nonatomic) unsigned int exptGroupId;
@property (retain, nonatomic) NSString *exptParam;
@property (nonatomic) unsigned int hitSrcType;
@property (nonatomic) unsigned int appUin;
@property (nonatomic) unsigned int jsDataType;

+ (id)createWithAppId:(id)a0 appVersion:(unsigned long long)a1 appState:(unsigned long long)a2 libVersion:(id)a3 libUpdateTime:(id)a4 exptGroupId:(unsigned int)a5 exptParam:(id)a6 hitSrcType:(unsigned int)a7 appUin:(unsigned int)a8 jsDataType:(unsigned int)a9;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
