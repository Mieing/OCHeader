@interface AWESpecialCardOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler

- (id)paramsForVideoPlayQuality;
- (id)paramsForVideoPlayEnd;
- (id)paramsForVideoPlayFailed:(BOOL)a0;
- (id)paramsForVideoRequest:(BOOL)a0;
- (id)paramsForVideoBlock;
- (id)specialCardCommonParams;

@end
