@class MMLiveContainerPresentCheckRecord;

@interface MMLiveContainerLogicHandler : NSObject

@property (retain, nonatomic) MMLiveContainerPresentCheckRecord *lastReportPresentCheckRecord;
@property (retain, nonatomic) MMLiveContainerPresentCheckRecord *pendingReportPresentCheckRecord;

- (void)onLiveContainerPresentCheck:(unsigned long long)a0 presentingVC:(id)a1 scene:(unsigned long long)a2 liveId:(unsigned long long)a3;
- (void)onCurrLiveContainerLogicWillDestroy;
- (void)delayToReportPresentCheckRecordIfNeed:(id)a0;
- (void)cancelPresentCheckPendingReport;
- (void)reportPresentCheckRecord;
- (void).cxx_destruct;

@end
