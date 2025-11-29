@interface AWEAwemeDetailPerformanceMonitorHandler : AWEOnPlayAndMonitorBaseHandler

- (id)paramsForVideoPlayQuality;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:(BOOL)a0;
- (id)getTransmissionParamsForEvent:(id)a0;
- (id)paramsForVideoRequest:(BOOL)a0;
- (id)paramsForVideoRequestResponse;
- (id)paramsForVideoBlock;

@end
