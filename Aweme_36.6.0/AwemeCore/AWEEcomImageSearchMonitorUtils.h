@class NSDate;

@interface AWEEcomImageSearchMonitorUtils : NSObject

@property (retain, nonatomic) NSDate *reqeustStartTime;
@property (nonatomic) unsigned long long searchPullType;

- (void)requestStartMonitorWithIsLoadMore:(BOOL)a0;
- (void)receiveRawJsonMonitorWith:(id)a0;
- (void)receiveResponseMonitorWithResponse:(id)a0 Error:(id)a1 EnterFrom:(id)a2 RefViewController:(id)a3;
- (void)clientTraceEndMonitorWith:(id)a0 realSendTime:(double)a1;
- (void)p_handleRefreshServerTimeCost:(id)a0 RefViewController:(id)a1;
- (void).cxx_destruct;

@end
