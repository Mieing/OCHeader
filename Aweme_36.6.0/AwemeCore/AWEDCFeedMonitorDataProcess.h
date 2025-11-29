@class NSString, NSMutableDictionary, NSObject, AWEDCFeedMonitorSettingInfo;
@protocol OS_dispatch_queue;

@interface AWEDCFeedMonitorDataProcess : NSObject {
    NSString *_scene;
    AWEDCFeedMonitorSettingInfo *_settingInfo;
    NSMutableDictionary *_nativeSamplingDict;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableDictionary *_processingDict;
    NSMutableDictionary *_recordDict;
    NSMutableDictionary *_nativeSubEventSamplingDict;
    double _fmpBeginTime;
}

- (void)setExtra:(id)a0;
- (void)setExtraForEvent:(id)a0 extra:(id)a1;
- (void)setCommonParams:(id)a0 event:(id)a1;
- (void)recordCurrentDurationForEvent:(id)a0 currentEventName:(id)a1;
- (void)finishWithEvent:(id)a0;
- (void)finishWithEvent:(id)a0 extra:(id)a1;
- (void)cancelWithEvent:(id)a0;
- (void)beginSubEventWithEvent:(id)a0 sub:(id)a1;
- (void)finishSubEventWithEvent:(id)a0 sub:(id)a1;
- (id)initWithScene:(id)a0 settingInfo:(id)a1;
- (void)trackAllEvent:(id)a0;
- (double)getCurrentFMPBeginTime;
- (void)beginFMPMonitor;
- (void)finishFMPMonitor;
- (void)cancelFMPMonitor;
- (id)generalJsonStringWithDict:(id)a0;
- (BOOL)checkAndUpdateCurrentEventNativeSampling:(id)a0;
- (BOOL)checkAndUpdateSubEventNativeSampling:(id)a0;
- (void)trackEvent:(id)a0 data:(id)a1 finishTime:(double)a2 extra:(id)a3;
- (void)recordEvent:(id)a0 data:(id)a1 finishTime:(double)a2;
- (void)recordSubWithEvent:(id)a0 sub:(id)a1 beginTime:(double)a2 finishTime:(double)a3;
- (id)generalSubInfoStringWithSubDict:(id)a0;
- (id)getMonitorDataWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)beginWithEvent:(id)a0;
- (void)dealloc;

@end
