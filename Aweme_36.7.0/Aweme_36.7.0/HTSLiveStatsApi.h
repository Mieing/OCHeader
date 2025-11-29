@class NSString, NSDictionary;
@protocol IESLiveMonitor;

@interface HTSLiveStatsApi : NSObject

@property (copy, nonatomic) NSString *streamUrl;
@property (copy, nonatomic) NSString *startRoomMemory;
@property (retain, nonatomic) NSDictionary *optimizeInfo;
@property (nonatomic) long long statsType;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;

- (id)initWithStreamUrl:(id)a0 startRoomMemory:(id)a1 streamOptimizeInfo:(id)a2 statsType:(long long)a3;
- (void)liveCoreLogReportWithInfo:(id)a0 logType:(id)a1 reportType:(long long)a2;
- (id)initWithStreamUrl:(id)a0 startRoomMemory:(id)a1 statsType:(long long)a2;
- (void)statsWithInfo:(id)a0 reportType:(long long)a1;
- (void)cloudRenderReportWithInfo:(id)a0 logType:(id)a1 reportType:(long long)a2;
- (void).cxx_destruct;

@end
