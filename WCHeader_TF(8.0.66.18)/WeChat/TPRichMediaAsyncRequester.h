@class TPPlayerLogContext, NSString;
@protocol ITPPlayerRichMediaAsyncRequesterWrapper, ITPRichMediaAsyncRequesterDelegate;

@interface TPRichMediaAsyncRequester : NSObject <ITPPlayerRichMediaAsyncRequesterWrapperCallback, ITPRichMediaAsyncRequester>

@property (retain, nonatomic) id<ITPPlayerRichMediaAsyncRequesterWrapper> requester;
@property (retain, nonatomic) TPPlayerLogContext *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ITPRichMediaAsyncRequesterDelegate> delegate;

- (id)init;
- (long long)setRichMediaSource:(id)a0;
- (long long)prepareAsync;
- (id)features;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeMs:(long long)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeMsArray:(id)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeRange:(id)a1;
- (int)requestFeatureDataAsyncWithIndex:(int)a0 timeRangeArray:(id)a1;
- (void)cancelRequestWithRequestId:(int)a0;
- (void)releaseRequester;
- (void)onRequesterPrepared:(id)a0;
- (void)onRequester:(id)a0 errorCode:(int)a1;
- (void)onFeatureDataRequestFailure:(id)a0 requestId:(int)a1 featureIndex:(int)a2 errorCode:(int)a3;
- (void)onFeatureDataRequestSuccess:(id)a0 requestId:(int)a1 featureIndex:(int)a2 featureData:(const void *)a3;
- (void).cxx_destruct;

@end
