@interface NewLifeEnterReporter : NSObject

+ (void)onFindFriendDidAppear;
+ (void)setupReportContext:(BOOL)a0;
+ (void)setupReportContextOnSwitchIn;
+ (void)setCacheType:(unsigned int)a0;
+ (void)setNewLifeTab:(unsigned int)a0;
+ (void)setUseInstanceCache:(unsigned int)a0;
+ (void)setRedDotUUID:(id)a0;
+ (void)addReportAction:(id)a0;
+ (id)getPeriodCost:(id)a0 startAction:(id)a1 endAction:(id)a2;
+ (void)addReportAction:(id)a0 timestamp:(unsigned long long)a1 upTime:(unsigned long long)a2;
+ (void)reportCgiInfoFail:(id)a0 errCode:(int)a1 errMsg:(id)a2 beforeFetchClock:(unsigned long long)a3 afterFetchClock:(unsigned long long)a4 redDotUuid:(id)a5;
+ (void)reportCgiInfo:(id)a0 response:(id)a1 beforeFetchClock:(unsigned long long)a2 afterFetchClock:(unsigned long long)a3 profileClockData:(id)a4 redDotUuid:(id)a5;

@end
