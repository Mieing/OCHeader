@class CgiRouterInfo, CgiReportDataModel;

@interface CgiReportDataTask : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned long long reqItemConfsVersion;
@property (retain, nonatomic) CgiRouterInfo *info;
@property (retain, nonatomic) CgiReportDataModel *dataModel;
@property (nonatomic) unsigned int doCgiReqCount;
@property (nonatomic) unsigned long long doCgiReqTimeMs;

- (id)initWith:(id)a0 andData:(id)a1;
- (id)setCanNotTry;
- (unsigned int)getConfigTryCount;
- (BOOL)doCgiRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (unsigned int)valueTranslate:(unsigned int)a0 andArr:(id)a1 andKeyBegin:(unsigned int)a2 andKeyEnd:(unsigned int)a3;
- (void)logTaskInfo;
- (void).cxx_destruct;

@end
