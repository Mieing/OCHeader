@class NSString, NSMutableDictionary;

@interface IESLiveGameMonitoringContextImpl : IESLiveGameContextNode <IESLiveGameMonitoringContext>

@property (retain, nonatomic) NSMutableDictionary *durationTrackingMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorWithService:(id)a0 status:(id)a1 extraInfos:(id)a2;
- (void)monitorErrorWithService:(id)a0 extraInfos:(id)a1;
- (void)monitorSuccessWithService:(id)a0 extraInfos:(id)a1;
- (void)monitorWithService:(id)a0 category:(id)a1 extraInfos:(id)a2;
- (void)monitorWithService:(id)a0 category:(id)a1 metric:(id)a2 extraInfos:(id)a3;
- (void)monitorErrorWithService:(id)a0 errorCode:(id)a1 errorMsg:(id)a2 extraInfos:(id)a3;
- (void)clearAllMonitorDurationRecord;
- (void)monitorWithService:(id)a0 status:(id)a1 metric:(id)a2 extraInfos:(id)a3;
- (void)monitorDurationStartWithBatchServices:(id)a0;
- (void)monitorDurationStartWithService:(id)a0;
- (void)monitorDurationEndWithService:(id)a0 status:(id)a1 extraInfos:(id)a2;
- (void).cxx_destruct;

@end
