@interface WAReportLeakItem : WAReportBaseItem

@property (nonatomic) BOOL isGame;
@property (nonatomic) unsigned int closeReason;
@property (nonatomic) unsigned long long leakType;

+ (id)createWithInstanceId:(id)a0 appId:(id)a1 username:(id)a2 appVersion:(unsigned long long)a3 appState:(unsigned long long)a4 libVersion:(unsigned int)a5 libCustomVersion:(id)a6 weappScene:(unsigned long long)a7 isGame:(BOOL)a8 closeReason:(unsigned int)a9 leakType:(unsigned long long)a10 nickName:(id)a11;

- (int)reportID;
- (id)reportString;

@end
