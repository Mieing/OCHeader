@class NSMutableDictionary;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveInteractXPlayMonitor : NSObject

@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (retain, nonatomic) NSMutableDictionary *restartMap;
@property (retain, nonatomic) NSMutableDictionary *startTimestampMap;

- (void)monitorWithEventName:(id)a0 gameId:(id)a1 extra:(id)a2;
- (void)traceName:(id)a0 step:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 gameId:(id)a4 extra:(id)a5;
- (id)trackExtraWithExtra:(id)a0 gameId:(id)a1;
- (id)startStatusNameWithStartStatus:(unsigned long long)a0 itemStatus:(long long)a1;
- (id)getDurationTrackInfo:(id)a0;
- (void)traceAndMonitorWithTraceName:(id)a0 eventName:(id)a1 errorCode:(long long)a2 errorMsg:(id)a3 gameId:(id)a4 extra:(id)a5;
- (void)recordGameIdStart:(id)a0 first:(BOOL)a1;
- (void)recordGameStartStateChange:(id)a0 startStatus:(unsigned long long)a1 itemStatus:(long long)a2 errorCode:(long long)a3 info:(id)a4;
- (void).cxx_destruct;

@end
