@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWETeenQualityMonitorService : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorDataDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (void)endRenderContentStageForScene:(id)a0 subScene:(id)a1 error:(id)a2 extraInfo:(id)a3;
- (void)startMonitorWithScene:(id)a0 subScene:(id)a1 isRefresh:(BOOL)a2;
- (void)endCreateContainerStageForScene:(id)a0 subScene:(id)a1;
- (void)stopMonitorWithScene:(id)a0 subScene:(id)a1 status:(long long)a2 error:(id)a3 extraInfo:(id)a4;
- (void)beginRequestDataStageForScene:(id)a0 subScene:(id)a1;
- (void)endRequestDataStageForScene:(id)a0 subScene:(id)a1 error:(id)a2 extraInfo:(id)a3;
- (void)beginRenderContentStageForScene:(id)a0 subScene:(id)a1;
- (id)monitorIdentifyWithScene:(id)a0 subScene:(id)a1;
- (void)stopMonitorQualityMessgae:(id)a0 status:(long long)a1 error:(id)a2 extraInfo:(id)a3;
- (void)beginCreateContainerStageForScene:(id)a0 subScene:(id)a1;
- (id)qualityMessageForScene:(id)a0 subScene:(id)a1;
- (void)beginStage:(id)a0 forScene:(id)a1 subScene:(id)a2;
- (void)endStage:(id)a0 forScene:(id)a1 subScene:(id)a2 error:(id)a3 extraInfo:(id)a4;
- (void)reportQuality:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
