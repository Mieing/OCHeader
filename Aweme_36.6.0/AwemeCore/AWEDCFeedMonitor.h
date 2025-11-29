@class NSMutableDictionary, NSDictionary, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDCFeedMonitor : NSObject {
    NSDictionary *_settingDict;
    NSMutableDictionary *_customSettingDict;
    NSMutableDictionary *_settingInfo;
    NSMutableDictionary *_dataProcessDict;
    NSMutableDictionary *_sceneEnableCache;
    NSMutableDictionary *_sceneEventCache;
    NSMutableDictionary *_sceneSubEventCache;
    NSTimer *_timer;
    unsigned long long _combinationDuration;
    NSObject<OS_dispatch_queue> *_commonProcessingQueue;
}

+ (void)setExtraForScene:(id)a0 event:(id)a1 extra:(id)a2;
+ (id)getCustomDataProcessWithScene:(id)a0 event:(id)a1 ignoreSetting:(BOOL)a2;
+ (void)beginFMPMonitorWithScene:(id)a0;
+ (id)defaultSettingDict;
+ (void)finishWithScene:(id)a0 event:(id)a1;
+ (void)recordCurrentDurationForScene:(id)a0 event:(id)a1 currentEvent:(id)a2;
+ (id)getCustomDataProcessWithScene:(id)a0 event:(id)a1;
+ (void)setCommonParams:(id)a0 scene:(id)a1 event:(id)a2;
+ (void)finishFMPMonitorWithScene:(id)a0;
+ (void)beginSubEventWithScene:(id)a0 event:(id)a1 sub:(id)a2;
+ (void)finishSubEventWithScene:(id)a0 event:(id)a1 sub:(id)a2;
+ (void)beginWithScene:(id)a0 event:(id)a1;
+ (double)getCurrentFMPBeginTimeWithScene:(id)a0;
+ (void)finishWithScene:(id)a0 event:(id)a1 extra:(id)a2;
+ (void)setDefaultSettingDictWithScene:(id)a0 dict:(id)a1;
+ (void)trackAllEvent;
+ (void)cancelWithScene:(id)a0 event:(id)a1;
+ (void)setExtra:(id)a0 scene:(id)a1;
+ (void)beginTimerIfNeeded;
+ (void)cancelFMPMonitorWithScene:(id)a0;
+ (void)resetTimer;
+ (void)initialize;
+ (id)sharedInstance;

- (BOOL)currentSceneEnable:(id)a0;
- (BOOL)currentEventEnableWithScene:(id)a0 event:(id)a1;
- (id)getDataProcessWithScene:(id)a0;
- (BOOL)currentEventEnableTagWithScene:(id)a0 event:(id)a1;
- (id)getSettingInfoWithScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
