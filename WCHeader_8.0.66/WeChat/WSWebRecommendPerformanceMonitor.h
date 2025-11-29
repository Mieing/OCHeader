@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WSWebRecommendPerformanceMonitor : MMUserService <MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_monitorQueue;
}

@property (nonatomic) double webRecommendTLInitTime;
@property (nonatomic) double webRecommendTLUIBeginRenderTime;
@property (nonatomic) double webRecommendTLBePushedTime;
@property (nonatomic) double webRecommendTLSuperViewInitDuration;
@property (nonatomic) double webRecommendTLUIRenderDuration;
@property (nonatomic) double webRecommendTLUIRenderDurationFromInit;
@property (nonatomic) double videoPageInitTime;
@property (nonatomic) double videoRequestWebRecommendBeginTime;
@property (nonatomic) double videoRequestWebRecommendEndTime;
@property (nonatomic) double videoWaitForAllUrlEndFromInit;
@property (nonatomic) double videoWaitForAllUrlEndFromFirstOne;
@property (retain, nonatomic) NSMutableDictionary *videoApiRequestBeginDic;
@property (retain, nonatomic) NSMutableDictionary *videoUrlRequestBeginDic;
@property (retain, nonatomic) NSMutableDictionary *videoDecideCellForUrlDic;
@property (nonatomic) double videoPageRenderDuration;
@property (nonatomic) double videoRequestWebRecommendDuration;
@property (nonatomic) double videoFirstVideoPlayFromInitDuration;
@property (nonatomic) double videoFirstVideoPlayFromRequestEndDuration;
@property (retain, nonatomic) NSMutableDictionary *videoApiRequestDurationDic;
@property (retain, nonatomic) NSMutableDictionary *videoUrlRequestDurationDic;
@property (retain, nonatomic) NSMutableDictionary *videoUrlPlayDurationDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)resetTLData;
- (void)resetVideoData;
- (void)uploadData;
- (void)uploadTLData:(BOOL)a0;
- (void)uploadVideoData;
- (void)devideUploadVideoDataWithSlice:(long long)a0 requestId:(id)a1;
- (void)sendToMonitorQueueToExcute:(id /* block */)a0;
- (void)recordWebRecommendTLInit;
- (void)recordWebRecommendTLUIInit;
- (void)recordWebRecommendTLUIWillRender;
- (void)recordWebRecommendTLUIReady;
- (void)recordWebRecommendTLBePushed;
- (void)recordWebRecommendTLBePoped;
- (void)recordVideoFlowInit;
- (void)recordVideoFlowDidAppear;
- (void)recordVideoFlowRequestWebRecommend;
- (void)recordVideoFlowRequestWebRecommendEnd;
- (void)recordVideoFlowFetchVideo:(id)a0;
- (void)recordVideoFlowFetchVideoEnd:(id)a0 returnUrlHead:(id)a1;
- (void)recordVideoFlowWaitForAllUrlEnd;
- (void)recordVideoBeginDownloadFromUrl:(id)a0;
- (void)recordVideoDecideCellForUrl:(id)a0;
- (void)recordVideoBeginPlayFromUrl:(id)a0;
- (void)recordVideoFlowLeave;
- (void).cxx_destruct;

@end
